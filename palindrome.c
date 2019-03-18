#include <stdio.h>
#include <string.h>

int palindrome(char str[], int len){
  for(int i = 0; i <= (len-1)/2 ; i++){
    if(str[i] != str[len-i-1])
      return 0;
  }
  return 1;
}

int main() {
  char str[100];
  scanf("%s", str);
  if(palindrome(str, strlen(str)) == 0)
    printf("NO");
  else
    printf("YES");
  return 0;
}
