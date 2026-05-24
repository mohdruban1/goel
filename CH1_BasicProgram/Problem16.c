#include <stdio.h>
#include <math.h>
int main()
{
  long long int N;
  int rem, i = 0, dec = 0, oct = 0;
  printf("Enter the number : ");
  scanf("%lld", &N);
  while (N != 0)
  {
    rem = N % 10;
    dec += rem * pow(2, i++);
    N /= 10;
  }
  printf("%d\n", dec);
  i = 1;
  while (dec != 0)
  {
    rem = dec % 8;
    oct += rem * i;
    dec /= 8;
    i *= 10;
  }
  printf("%d", oct);
}