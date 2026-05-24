#include <stdio.h>
int fact(int n)
{
  int fac = 1;
  while (n > 1)
  {
    fac *= n;
    n--;
  }
  return fac;
}
int main()
{
  int n, sum = 0, i;
  scanf("%d", &n);
  i = n;
  while (n != 0)
  {
    sum += fact(n % 10);
    n /= 10;
  }
  if (i == sum)
    printf("strong");
}