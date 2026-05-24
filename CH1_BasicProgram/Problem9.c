#include <stdio.h>
int main()
{
  int n, n2, num, r;
  printf(" enter no :");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    n2=0;
    num = i;
    while (num != 0)
    {
      r = num % 10;
      n2 = n2 * 10 + r;
      num = num/ 10;
    }
    if (i == n2)
      printf("%d,", i);
  }
}