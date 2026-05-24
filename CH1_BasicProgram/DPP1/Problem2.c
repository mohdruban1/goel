#include <stdio.h>
int main()
{
  int N, sum = 0;
  printf("Enter the number: ");
  // scanf("%d", &N);
  for (N = 1; N <= 100; N++)
  {
    for (int i = 1; i <= N; i++)
    {
      if (N % i == 0)
      {
        sum += i;
      }
    }
    if (sum < N)
      printf(" Number is Deficient %d \n ", N);
    sum=0;
  }
}