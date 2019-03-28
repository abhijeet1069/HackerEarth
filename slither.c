#include <stdio.h>

int main(){
  int row = 0, col = 0;
  int addX = -1 ,addY = 1;

  printf("%d,%d\n", row, col);

  while(1){
    if(row == col && row == 5)  //check after 5,0. Take care of diagonal
      break;
    row = row + addX;
    col = col + addY;
    if(row == -1){
      row = 0;
      addX = 1;
      addY = -1;
    }
    if(col == -1){
      col = 0;
      addX = -1;
      addY = 1;
    }
    printf("%d,%d\n", row, col);
  }
}
