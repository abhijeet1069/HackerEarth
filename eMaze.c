#include <stdio.h>

int main() {
  int x=0, y=0, c;
  while((c=getchar()) != EOF){
    switch(c){
      case 'L' : --x;
        break;
      case 'R' : ++x;
        break;
      case 'U' : ++y;
        break;
      case 'D' : --y;
        break;
    }
  }
  printf("%d %d\n", x, y);
  return 0;
}
