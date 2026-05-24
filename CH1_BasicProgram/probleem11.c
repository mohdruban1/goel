#include <stdio.h>
int main()
{
  int i, n, sum;
  printf("enter the number:");
  scanf("%d", &n);
  do
  {
    sum = 0;
    while (n != 10)
    {
      i = n % 10;
      sum += i * i;
      n = n / 10;
    }
    if (sum >= 10)
      n = sum;

  } while (n >= 10);
  if (sum == 1)
    printf("Happy number");
  else
    printf(" not a happy number");
  return 0;
}