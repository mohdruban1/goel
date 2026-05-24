#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, j, n, count = 0, status = 0;
  printf("Enter the Array size : ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the first matrix : ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++)
  {
    count = 0;
    for (j = 0; j < n; j++)
    {
      if (a[i] == a[j])
        count++;
      if (count > n / 2)
      {
        printf(" majority element exists : %d", a[i]);
        exit(0);
      }
    }
    if (status = 0)
      printf(" majority element does not exists ");
  }
}