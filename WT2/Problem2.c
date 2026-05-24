#include <stdio.h>
int main()
{
  int a = 0, b = 1, c, n;
  scanf("%d", &n);
  printf("%d ", a);
  c = a + b;
  printf("%d ", c);
  while (c < n)
  {
    a = b;
    b = c;
    printf(" %d ", c);
    c = a + b;
  }
}