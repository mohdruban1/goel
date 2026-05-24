#include <stdio.h>
int main()
{
  int n, i, count = 0, j, temp;
  printf("Enter the number : ");
  scanf("%d", &n);
  int a[n], b[n];
  printf("Enter the array num : ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i += 2)
  {
    if (i != (n - 1))
    {
      b[i] = a[i + 1];
      b[i + 1] = a[i];
    }
    else
      b[i] = a[i];
  }
  for (i = 0; i < n; i++)
  {
    printf("%d,", b[i]);
  }
}