#include <stdio.h>
int main()
{
  int n, k, num;
  printf(" enter the number : ");
  scanf("%d%d", &n, &k);
  num = n;
  while (n > 0)
  {
    printf("%d,", n);
    n -= k;
  }
  while (n < num)
  {
    n += k;
    printf("%d,", n);
  }
  return 0;
}