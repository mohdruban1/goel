#include <stdio.h>
int main()
{
  int i, j, n;
  char c, c1;
  printf("Enter the number : ");
  scanf("%d %c", &n, &c);
  c1 = c;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
      printf("%c ", c++);
    printf("\n");
    c = c1;
  }
  return 0;
}