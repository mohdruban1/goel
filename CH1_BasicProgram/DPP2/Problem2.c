#include <stdio.h>
#include <math.h>
int main()
{
  int n, n2, n1, i, sum = 0, rem, count = 0;
  scanf("%d", n);
  n1 = n;
  n2 = n;
  while (n1 != 0)
  {
    count++;
    n1 /= 10;
  }
  while (n2 != 0)
  {
    rem = n2 % 10;
    sum = sum + pow(rem, count);
    n2 /= 10;
  }
  if (sum == n)
    printf("%d is armstrong", n);
  else
    printf("%d is not  armstrong", n);
}