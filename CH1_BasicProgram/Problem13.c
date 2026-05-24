#include <stdio.h>
int main()
{
  int N, Number[16], i = 0, rem, j, count = 0, temp,n1;
  printf("Enter the number : ");
  scanf("%d", &N);
  while (count < 16)
    Number[count++] = 0;
  while (N != 0)
  {
    rem = N % 8;
    Number[i++] = rem;
    N = N / 8;
  }
  n1=i;
  for (i, j = 0; j < i; i--, j++)
  {
    temp = Number[j];
    Number[j] = Number[i];
    Number[i] = temp;
  }
  for (i = 0; i <= n1; i++)
    printf("%d", Number[i]);
  return 0;
}