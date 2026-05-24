#include <stdio.h>
int main()
{
  int n, sum = 0, i;
  scanf("%d", &n);

  for (i = 1; i < n; i++)
  {
    if (i & 1)
      sum += i;
    else
      sum -= i;
  }
  printf("%d", sum > 0 ? sum : -sum);
}