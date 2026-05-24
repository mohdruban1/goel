#include <stdio.h>
int main()
{
  int N, Number[16], i = 0, rem, j, count = 0, temp;
  printf("Enter the number : ");
  scanf("%d", &N);
  while (count < 16)
  {
    Number[count++] = 0;
  }
  while (N != 0)
  {
    rem = N % 2;
    Number[i++] = rem;
    N = N / 2;
  }
  for (i = 0,j=15; i < j; i++, j--)
  {
    temp = Number[i];
    Number[i] = Number[j];
    Number[j] = temp;
  }
  for (i = 0; i < 16; i++)
    printf("%d", Number[i]);
  return 0;
}