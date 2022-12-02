//GTG

# include <stdio.h>
#define SIZE 4

int isValidPos(int board[SIZE], int row);
int solveNQueens(int board[SIZE], int row);
void dispBoard(const int board[SIZE]); 
int abs(int val);

int main(void){

  int board[SIZE];

  if (solveNQueens(board, 0)){
    puts("Solution Exists");
    dispBoard(board);
  }
  else{
    puts("Solution doesnt exist");
  }
  return (0);
}

int isValidPos(int board[SIZE], int row){
  for (int i = 0; i < row; i++){
    if (board[i] == board[row]){
      return (0);
    }
    if (abs(board[i] - board[row]) == (row - i)){
      return (0);
    }
  }

  return (1);
}
int solveNQueens(int board[SIZE], int row){
  if (row < SIZE){
    for (int i = 0; i < SIZE; i++){
      board[row] = i;
      if (isValidPos(board, row)){
        if (solveNQueens(board, row + 1)){
          return (1);
        }
      }
    }
    return (0);
  }
  else {
    return (1);
  }
}

void dispBoard(const int board[SIZE]){
  for (size_t row  = 0; row < SIZE; row++){
    for (size_t col = 0; col < SIZE; col++){
      printf("|%c", ((col == board[row]) ? 'Q': ' '));
    }
    puts("|");
  }
} 

int abs(int val){
  if (val >= 0){
    return (val);
  }
  else{
    return (-val);
  }
}

//TYJC
