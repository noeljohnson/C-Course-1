//GTG

//Tortoise and hare race

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int tortMove(void);
int hareMove(void);
int calcPos(int currPos, int stepSize);
void drawRace(int tp, int hp);
int isOver(int tp, int hp);
void printWinner(int tp, int hp);

int main(void){

  srand(time(NULL));

  int tp = calcPos(1, tortMove()),
    hp = calcPos(1, hareMove());

  while (!(isOver(tp, hp))){
    drawRace(tp, hp);
    tp = calcPos(tp, tortMove());
    hp = calcPos(hp, hareMove());
  }

  printWinner(tp, hp);
}

int tortMove(void){
  int mvType = rand() % 10;

  if (mvType < 5){
    return (3);
  }

  else if (mvType < 7){
    return (-6);
  }

  else {
    return (1);
  }
}

int hareMove(void){
  
  int mvType = rand() % 10;

  if (mvType < 2){
    return (0);
  }

  else if (mvType < 4){
    return (9);
  }

  else if (mvType < 5){
    return (-12);
  }

  else if (mvType < 8){
    return (1);
  }

  else {
    return (-2);
  }
}
int calcPos(int currPos, int stepSize){
  
  if (currPos + stepSize < 1){
    return 1;
  }

  else if (currPos + stepSize > 70){
    return 70;
  }

  else{
    return (currPos + stepSize);
  }

}

void drawRace(int tp, int hp){
  
  for (int i = 1; i < 71; i++){
    printf("-");
  }
  
  puts("");

  if (tp == hp){
    if (tp != 70){
      puts("Ouch");
    }
  }

  for (int i = 1; i < 71; i++){

    if ((i == tp) && (i == hp)){
      printf("X");
    }
    
    else if (i == tp){
      printf("T");
    }
    
    else if (i == hp){
      printf("H");
    }

    else{
      printf(" ");
    }  
    

  }
  
  puts("");

}

int isOver(int tp, int hp){
  if (tp == 70 || hp == 70){
    return (1);
  }
  else{
    return (0);
  }
}


void printWinner(int tp, int hp){

  for (int i = 1; i < 71; i++){
    printf("-");
  }
  
  puts("");

  if (tp == hp){
    puts("Its a draw");
  }
  else if (tp > hp){
    puts("Tortoise Wins");
  }
  else{
    puts("Hare wins");
  }
}

//TYJC
