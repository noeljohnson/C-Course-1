//GTG

# include <stdio.h>

#define READ 10
#define WRITE 11
#define SET 12
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43
#define SIZE 100

int simpleValid(const int *const codePtr);
int validateCode(const int *const codePtr);
int getOpCode(const int *const codePtr);
int getOperand(const int *const codePtr);
void load(size_t operand, const int *const instrArrPtr, int *const accumPtr);
void store(size_t operand, int *const instrArrPtr, const int *const accumPtr);
int read(size_t operand, int *const instrArrPtr);
void write(size_t operand, const int *const instrArrPtr);
void dump(const int *const instrArrPtr);
void loadSML(int *const instrArrPtr);
int execStatement(const int *const codePtr, int *const instrArrPtr, int *accumPtr, int *const instrCountPtr);

int main(void){
  int instrArr[SIZE] = {0}, instrCount = 0,
    accumulator = 0;
  loadSML(instrArr);
  puts("Done loading SML file");
  puts("Now Executing Instruction");
  while ((instrArr[instrCount] != (-SIZE*SIZE + 1)) && instrCount < SIZE){
    if (!execStatement(instrArr + instrCount, instrArr, &accumulator, &instrCount)){
      return (0);
    }
  }

  printf("accumulator : %d\n", accumulator);
  printf("Address : %d\n", instrCount);
  dump(instrArr);
  return(0);
}

int simpleValid(const int *const codePtr){
  return(*codePtr > -SIZE * SIZE && *codePtr < SIZE * SIZE);
}

int validateCode(const int *const codePtr){
  int res, opCode, operand;
  opCode = getOpCode(codePtr);

  switch(opCode){
    case READ:
    case WRITE:
    case SET:
    case LOAD:
    case STORE:
    case ADD:
    case SUBTRACT:
    case DIVIDE:
    case MULTIPLY:
    case BRANCH:
    case BRANCHNEG:
    case BRANCHZERO:
    case HALT:
      res = 1;
      break;
    default:
      res = 0;
      break;
  }

  if (res){
    operand = getOperand(codePtr);
    if (operand < 0 || operand >= SIZE){
      res = 0;
    }
  }

  return (res);
}

int getOpCode(const int *const codePtr){
  return (*codePtr / SIZE);
}

int getOperand(const int *const codePtr){
  return (*codePtr % SIZE);
}

void load(size_t operand, const int *const instrArrPtr, int *const accumPtr){
  *accumPtr = instrArrPtr[operand];
}

void store(size_t operand, int *const instrArrPtr, const int *const accumPtr){
  instrArrPtr[operand] = *accumPtr;
}

int read(size_t operand, int *const instrArrPtr){
  printf("Enter value for address %zu : ", operand);
  scanf("%d", instrArrPtr + operand);
  if (simpleValid(instrArrPtr + operand)){
    return (1);
  }
  else{
    return (0);
  }
}

void write(size_t operand, const int *const instrArrPtr){
  printf("Value in address %zu is %d\n",
    operand, instrArrPtr[operand]);
}

void dump(const int *const instrArrPtr){
  puts("Memory");

  printf("%5s", "");
  for (int i = 0; i < 10; i++){
    printf("%5d  ", i);
  }

  for (size_t i = 0; i < SIZE; i++){
    if (i % 10 == 0){
      printf("\n%3d  ", i);
    }
    printf("%+05d  ", instrArrPtr[i]);
  }
  puts("");
}

void loadSML(int *const instrArrPtr){
  int instr = 0, i = 0;
  printf("%02zu ? ", 0);
  scanf("%d", &instr);

  for (; i < SIZE && instr != (-SIZE * SIZE + 1); i++){
    while (!simpleValid(&instr) || ! validateCode(&instr)){
      puts("Invalid SML statement, RENTER");
      printf("%02zu ? ", i);
      scanf("%d", &instr);
    }

    instrArrPtr[i] = instr;
    printf("%02zu ? ", i + 1);
    scanf("%d", &instr);
  }

  if (i < SIZE){
    instrArrPtr[i] = -SIZE * SIZE + 1;
  }
  else{
    instrArrPtr[SIZE - 1] = -SIZE * SIZE + 1;
  }
}

int execStatement(const int *const codePtr, int *const instrArrPtr, int *accumPtr, int *const instrCountPtr){
  int opCode = getOpCode(codePtr),
    operand = getOperand(codePtr),
    res = 1;

  switch(opCode){
    case READ:
      if (read(operand, instrArrPtr)){
        *instrCountPtr += 1;
      }
      else{
        puts("Overflow Error");
        res = 0;
      }
      break;

    case WRITE:
      write(operand, instrArrPtr); 
      *instrCountPtr += 1;
      break;

    case SET:
      *accumPtr = operand;
      *instrCountPtr += 1;
      break;

    case LOAD:
      load(operand, instrArrPtr, accumPtr);
      *instrCountPtr += 1;
      break;

    case STORE:
      store(operand, instrArrPtr, accumPtr);
      *instrCountPtr += 1;
      break;

    case ADD:
      *accumPtr += instrArrPtr[operand];
      if (!simpleValid(accumPtr)){
        puts("Overflow Error");
        res = 0;
      }
      *instrCountPtr += 1;
      break;

    case SUBTRACT:
      *accumPtr -= instrArrPtr[operand];
      if (!simpleValid(accumPtr)){
        puts("Overflow Error");
        res = 0;
      }
      *instrCountPtr += 1;
      break;

    case DIVIDE:
      if (instrArrPtr[operand] == 0){
        puts("Divide by zero error");
        res = 0;
      }
      else{
        *accumPtr /= instrArrPtr[operand];
        if (!simpleValid(accumPtr)){
          puts("Overflow Error");
          res = 0;
        }
      }
      *instrCountPtr += 1;
      break;

    case MULTIPLY:
      *accumPtr *= instrArrPtr[operand];
      if (!simpleValid(accumPtr)){
        puts("Overflow Error");
        res = 0;
      }
      *instrCountPtr += 1;
      break;

    case BRANCH:
      *instrCountPtr = operand;
      break;

    case BRANCHNEG:
      if (*accumPtr < 0){
        *instrCountPtr = operand;
      }else{
        *instrCountPtr += 1;
      }
      break;

    case BRANCHZERO:
      if (*accumPtr == 0){
        *instrCountPtr = operand;
      }else{
        *instrCountPtr += 1;
      }
      break;

    case HALT:
    default:
      res = 0;
      break;

  }
  return (res);
}
//TYJC
