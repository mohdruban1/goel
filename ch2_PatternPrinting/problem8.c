#include <stdio.h>
int main()
{
  int i, j, n;
  printf("Enter the number : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if ((i == 1) || (i == n))
      {
        if ((j == 1) || (j == n))
          printf("1");
        else
          printf("0");
      }
      else if (i == (n / 2 + 1))
      {
         if ((j == 1) || (j == n))
          printf("1");
        else if(i==j)
          printf("0");
        else
        printf(" ");
      }
      else
      {
        if ((i == j )|| (j == (n - i + 1)))
          printf("0");
        else if ((j==1) || (j==n))
         printf("1");
        else
          printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}