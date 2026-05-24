#include <stdio.h>
int main()
{
  int i, j, n, k;
  char c;
  printf("Enter the number : ");
  scanf("%d %c", &n, &c);
  for (i = 1; i <= n; i++)
  {
    for (k = 1; k <= (n - i); k++)
      printf(" ");
    for (j = 1; j <= i; j++)
      printf("%c ", c);
    printf("\n");
  }
  return 0;
}