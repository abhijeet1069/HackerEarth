#include <stdio.h>

int main() {
  int l, r, k,count = 0, i = 1;
  scanf("%d%d%d", &l, &r, &k);
  count = (r/k)-(l/k) ;
  if (l % k == 0)
       printf("%d\n",count+1);
  else
       printf("%d\n",count);

  return 0;
}
