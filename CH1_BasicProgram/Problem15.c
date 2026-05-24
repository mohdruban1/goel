#include <stdio.h>
int Power(int x);
int main()
{
  int N, rem, i = 0, j, oct = 0;
  printf("Enter the number : ");
  scanf("%d", &N);
  while (N != 0)
  {
    rem = N % 10;
    oct += rem * Power(i++);
    N /= 10;
  }
  printf("%d", oct);
}
int Power(int x)
{
  int result = 1;
  if (x == 0)
    return 1;
  else
  {
    while (x > 0)
    {
      result *= 8;
      x--;
    }
    return result;
  }
}