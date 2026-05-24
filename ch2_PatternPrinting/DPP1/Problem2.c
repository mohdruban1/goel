#include <stdio.h>
int main()
{
  int i, j, n, k, m = 2;
  printf("Enter the number : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n - i; j++)
      printf(" ");
    if (i != n)
      printf("1");
    if (i != 1 && i != n)
    {
      for (j = 1; j <= 2 * (i - 2) + 1; j++)
        printf(" ");
      printf("%d", m++);
    }
    if (i == n && i != 1)
    {
      for (j = 1; j <= n; j++)
        printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}