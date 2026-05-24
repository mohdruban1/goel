#include <stdio.h>
int main()
{
  int a = 0, b = 1, n, c, status = 0;
  printf(" enter no :");
  scanf("%d", &n);
  do
  {
    c = a + b;
    if (c == n)
    {
      printf("Fibonici number");
      status = 1;
    }
    a = b;
    b = c;
  } while (c <= n);
  if (status == 0)
    printf("Not a fibonici number");
  return 0;
}