#include <stdio.h>
int main()
{
  int n, i, count = 0, j, temp, position;
  printf("Enter the number : ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the array num : ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("\nEnter the delete position : ", &position);
  scanf("%d", &n);
  for (i = position; i < n; i++)
  {
    a[i]=a[i+1];
  }
  for (i = 0; i < n-1; i++)
  {
    printf("%d,", a[i]);
  }
}