#include <stdio.h>
int main()
{
  int i, j, n;
  char c, c1;
  printf("Enter the number : ");
  scanf("%d %c", &n, &c);
  // c1 = c;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
      printf("%c ", (c + j)); // c++
    printf("\n");
    // c = c1;
  }
  return 0;
}