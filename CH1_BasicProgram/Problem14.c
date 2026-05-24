#include <stdio.h>
int main()
{
  int N, rem, i = 0, j;
  char Hex[10];
  printf("Enter the number : ");
  scanf("%d", &N);
  while (N != 0)
  {
    rem = N % 16;
    if (rem >= 10)
      Hex[i++] = rem + 55;
    else
      Hex[i++] = rem + 48;
    N /= 16;
  }
  for (j = i - 1; j >= 0; j--)
    printf("%c", Hex[j]);
}