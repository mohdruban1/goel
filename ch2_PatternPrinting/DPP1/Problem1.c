#include <stdio.h>
int main()
{
  int i, j, n, k;
  char c;
  printf("Enter the number : ");
  scanf("%d %c", &n, &c);
  for (i = 1; i <= n; i++)
  {
    for (j = 0; j < i; j++)
      printf("%c ", (c + j));
    for (k = i; k > 1; k--)
      printf("%c ", c + k - 2);
    printf("\n");
  }
  return 0;
}