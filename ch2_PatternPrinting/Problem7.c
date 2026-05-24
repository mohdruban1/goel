#include <stdio.h>
int main()
{
  int i, j, n, k;
  printf("Enter the number : ");
  scanf("%d", &n);
  for (i = 1; i <= n / 2 + 1; i++)
  {
    if (i == (n / 2 + 1))
    {
      for (j = 1; j <= n; j++)
        printf("%d", i);
    }
    else
    {
      for (j = 1; j <= n; j++)
      {
        if (j <= i || j >= (n - i + 1))
          printf("%d", i);
        else
          printf(" ");
      }
    }
    printf("\n");
  }
  for (k = n - (n / 2 + 1); k >= 1; k--)
  {
    for (j = 1; j <= n; j++)
    {
      if (j <= k || j >= (n - k + 1))
        printf("%d", i);
      else
        printf(" ");
    }
    i++;
    printf("\n");
  }
  return 0;
}