//GTG

#include <stdio.h>
#define SIZE 12

void inpMaze(void);
void printMaze(void);
void detectOpenings(void);
void popOpenings(int numOpenings, size_t row, size_t col);
void solveMaze(void);
int addOffset(int arr[2], int offset[2]);
int inBounds(int coord);
void delay(void);

char maze[SIZE][SIZE];
int entRow, entCol, exitRow, exitCol, currRow, currCol;

int main(void){
  inpMaze();
  printMaze();
  detectOpenings();
  solveMaze();
  return(0);
}

void inpMaze(void){
  char c;
  int ind = 0;

  while ((c = getchar()) != EOF){
    if (ind < SIZE * SIZE){
      maze[ind / SIZE][ind % SIZE] = c;
      ind++;
    }
  }
}

void printMaze(void){
  for (size_t row = 0; row < SIZE; row++){
    for (size_t col = 0; col < SIZE; col++){
      printf("%c ", maze[row][col]);
    }
    puts("");
  }

  puts("");
}

void detectOpenings(void){
  int numOpenings = 0;

  // checking left column
  for (int row = 0; row < SIZE; row++){
    if (maze[row][0] == '.'){
      popOpenings(numOpenings, row, 0);
      if (numOpenings == 1){
        return;
      }
      numOpenings++;
    }
  }

  // checking top row
  for (int col = 0; col < SIZE; col++){
    if (maze[0][col] == '.'){
      popOpenings(numOpenings, 0, col);
      if (numOpenings == 1){
        return;
      }
      numOpenings++;
    }
  }

  // checking right column
  for (int row = 0; row < SIZE; row++){
    if (maze[row][SIZE-1] == '.'){
      popOpenings(numOpenings, row, SIZE-1);
      if (numOpenings == 1){
        return;
      }
      numOpenings++;
    }
  }

  // checking bottom row
  for (int col = 0; col < SIZE; col++){
    if (maze[SIZE-1][col] == '.'){
      popOpenings(numOpenings, SIZE-1, col);
      if (numOpenings == 1){
        return;
      }
      numOpenings++;
    }
  }
}

void popOpenings(int numOpenings, size_t row, size_t col){
  if (numOpenings == 0){
    entRow = row;
    entCol = col;
  }else if(numOpenings == 1){
    exitRow = row;
    exitCol = col;
  }
}

void solveMaze(void){
  int recSolveMaze(size_t row, size_t col);
  if (!recSolveMaze(entRow, entCol)){
    puts("No solution found");
  }
}

int recSolveMaze(size_t row, size_t col){
  static int possDir[4][2] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};

  int pos[2];
  
  maze[row][col] = 'X';

  if (row == exitRow && col == exitCol){
    return(1);
  }

  for (size_t i = 0; i < 4; i++){
    pos[0] = row;
    pos[1] = col;
    if (addOffset(pos, possDir[i])){
      if (maze[pos[0]][pos[1]] == '.'){
        printMaze();
        delay();
        if (recSolveMaze(pos[0], pos[1])){
          return (1);
        }
      }
    }
  }

  maze[row][col] = '.';
  return(0);

}

int addOffset(int arr[2], int offset[2]){

  arr[0] += offset[0];
  arr[1] += offset[1];

  return (inBounds(arr[0]) && inBounds(arr[1]));
}

int inBounds(int coord){
  if (coord >= 0 && coord < SIZE){
    return (1);
  }
  else{
    return(0);
  }
}

void delay(void){
  int n = 30000;
  for (size_t i = 0; i < n; i++){
    for (size_t j = 0; j < n; j++){
      i+j;
    }
  }
}

//TYJC
