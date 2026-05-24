#include <stdio.h>
int main()
{
  int n, i, count = 0, j;
  printf("Enter the number : ");
  scanf("%d", &n);
  int a[n], status[n];
  printf("Enter the array num : ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    status[i] = 0;
  }
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if ((a[j] == a[i]) && (status[i] == 0))
      {
        count++;
        status[i] = 1;
      }
    }
  }
  printf("%d", count);
}