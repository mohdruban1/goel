#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
  char hex[16];
  int i, j = 0, sum = 0, len, dec = 0, oct=0, rem, k = 1;
  printf("Enter hexadecimal number : ");
  scanf("%s", hex);
  len = strlen(hex);
  for (i = len - 1; i >= 0; i--)
  {
    if (hex[i] >= 'A' && hex[i] <= 'F')
      hex[i] -= 55;
    else
      hex[i] -= 48;
    dec += hex[i] * pow(16, j++);
  }
  printf("%d\n", dec);
  while (dec != 0)
  {
    rem = dec % 8;
    oct = oct + rem * k;
    k *= 10;
    dec /= 8;
  }
  printf("%d", oct);
}