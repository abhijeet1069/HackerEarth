#include <stdio.h>

int main() { //made changes 
  int n, a[1000];
  long int product = 1;
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
    scanf("%d", a+i);
  for(int i = 0; i < n; i++)
    product = (product*a[i]) % (1000000000 + 7);
  printf("%ld\n", product);
  return 0;
}
