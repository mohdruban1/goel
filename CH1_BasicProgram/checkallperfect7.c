#include <stdio.h>
int main()
{
  int N, sum;
  printf("Enter the number : ");
  scanf("%d", &N);
  for (int j = 1; j <= N; j++)
  {
    sum = 0;
    for (int i = 1; i <= j/2; i++)
    {
      if (j%i == 0)
        sum += i;
    }
    if (sum == j)
      printf(" %d", j);
  }
  return 0;
}