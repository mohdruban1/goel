#include <stdio.h>
#include <math.h>
int main()
{
  int N, i;
  float sum = 0;
  printf("Enter the number : ");
  scanf("%lld", &N);
  for (i = 1; i <= N; i++)
    sum += (1.0 / i);
  printf(" sum of serise : %f", sum);
}