#include <stdio.h>
int main()
{
  int n, sum = 0, i = 1;
  scanf("%d", &n);
  while (sum <= n)
  {
    printf("%d ", sum);
    sum += i++;
  }
}