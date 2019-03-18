#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  scanf("%s",str);
  for (int i = 0; i < strlen(str) ; i++) {
    if(str[i] <= 'Z')
      str[i] = str[i]+32;
    else
      str[i] = str[i]-32;
  }
  printf("%s\n",str);
  return 0;
}
