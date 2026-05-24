#include <stdio.h>
int main()
{
  int N, sum = 0;
  printf("Enter the number : ");
  scanf("%d",&N);
  for (int i = 1; i <= N / 2; i++)
  {
    if (N % i == 0)
    {
      sum += i;
    }
  }
  if (sum == N)
    printf("Perfect");
  else
    printf("Not perfect");
  return 0;
}