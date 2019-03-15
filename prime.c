#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int isPrime(int num){
    for(int i = 2; i<=floor(sqrt(num)); i++)
      if(num % i == 0)
        return FALSE;
    return TRUE;
}

int main() {
  int num;
  scanf("%d",&num);
  for(int i = 2; i <= num; i++)
    if(isPrime(i))
      printf("%d ",i);
  return 0;
}
