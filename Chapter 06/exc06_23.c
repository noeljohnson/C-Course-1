//GTG

# include <stdio.h>
# define SIZE 50

void printBoard(const int board[][SIZE]);
int execComm(int currInfo[4], int board[][SIZE], char cInfo[5]);
void printInstr();
void addPtsBounded(int posn[], int offset[]);
int constrictBounds(int val);

int main(void){
  char cInfo[5];
  int currInfo[4] = {1,
    0, //row location
    0, //col location
    0, // direction marker
  },
    board[SIZE][SIZE] = {{0}},
    ind = 0;
  
  printInstr();

  do{
    printf("C_%03d : ", ind++);
    scanf("%4s", cInfo);
  }while(execComm(currInfo, board, cInfo));

  return (0);

}

void printBoard(const int board[][SIZE]){
  puts("");

  for (size_t i = 0; i < SIZE; i++){
    for (size_t j = 0; j < SIZE; j++){
      printf("%s", (board[j][i] == 1 ? "*": " "));
    }
    puts("");
  }
  puts("");
}

int execComm(int currInfo[4], int board[][SIZE], char cInfo[5]){
  static int dir[4][2] = {{1, 0}, {0, 1}, 
    {-1, 0}, {0, -1}};
  int comm, stride = 0, returnVal = 1;

  if (cInfo[1] == ','){
    stride = cInfo[3] - '0';
    stride += (cInfo[2] - '0') * 10;
  }

  comm = cInfo[0] - '0';

  switch(comm){
    case 0:
      printInstr();
      break;

    case 1:
      currInfo[0] = 0;
      break;

    case 2:
      currInfo[0] = 1;
      break;

    case 3:
      currInfo[3] = (currInfo[3] + 1) % 4;
      break;

    case 4:
      currInfo[3] = (currInfo[3] + 2) % 4;
      break;

    case 5:
      int posn[2] = {
        currInfo[1],
        currInfo[2]
      },
        dirVec[2] = {
          dir[currInfo[3]][0] * stride,
          dir[currInfo[3]][1] * stride,
        };

      addPtsBounded(posn, dirVec);

      if (currInfo[0] == 1){
        for (size_t i = currInfo[1]; i <= posn[0]; i++){
          for (size_t j = currInfo[2]; j <= posn[1]; j++){
            board[i][j] = 1;
          }
        }
      }
      
      currInfo[1] = posn[0];
      currInfo[2] = posn[1];
      break;

    case 6:
      printBoard(board);
      break;

    case 9:
      returnVal = 0;
      break;
  }

  return (returnVal);
}

void printInstr(){
  puts("Following are the available commands");
  puts("  0 for listing commands");
  puts("  1 Pen up");
  puts("  2 Pen down"); 
  puts("  3 Turn right"); 
  puts("  4 Turn left"); 
  puts("  5, 10 Move forward 10 spaces (or a number other than 10)"); 
  puts("  6 Print the 50-by-50 array"); 
  puts("  9 End of data (sentinel)");
}

void addPtsBounded(int posn[], int offset[]){

  posn[0] = constrictBounds(posn[0] + offset[0]);
  posn[1] = constrictBounds(posn[1] + offset[1]);
}

int constrictBounds(int val){
  if (val < 0){
    return 0;
  }
  else if (val < SIZE){
    return val;
  }else{
    return SIZE - 1;
  }
}

//TYJC
