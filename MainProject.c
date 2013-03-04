#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#defult ROWS=10
#defult COLS=15
#defult NUMCOLORS=4

void main(){
  srand((unsigned)time(NULL));
  char arrange[ROWS][COLS];
  int i,j;
  for(i=0;i<ROWS;i++){
    for(j=0;j<COLS; j<){
      arrange[i][j]=rand()%NUMCOLORS+'A';
    }
  }
  return;
}
