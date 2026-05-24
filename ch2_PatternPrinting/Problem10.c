#include <stdio.h>
int main()
{
  int i, j, k, n;
  printf("enter yhe number : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= 2*n; j++)
    {
      if ((j<=i) || (j>2*n-i))
      printf("*");
      else
      printf(" ");
    }
    printf("\n");
  }
  for (i = n; i >= 1; i--)
  {
    for (j = 1; j <= 2*n; j++)
    {
      if ((j<=i) || (j>2*n-i))
      printf("*");
      else
      printf(" ");
    }
    printf("\n");
  }
}