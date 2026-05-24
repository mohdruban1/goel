#include <stdio.h>
int main()
{
  int binary[16], gray[16], i, j, N;
  printf("Enter the number : ");
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    printf("Enter the %dst digit:",i);
    scanf("%d", &binary[i]);
  }
  gray[0] = binary[0];
  for (i = 1, j = 1; i < N; i++, j++)
    gray[j] = binary[i] ^ binary[i - 1];

  for (i = 0; i < N; i++)
    printf("%d", gray[i]);
}