#include <stdio.h>
#include <math.h>
int main()
{
  int n, val;
  printf("Enter the Number : ");
  scanf("%d", &n);
  for (int i = 2; i <= n; i++)
  {
    int count = 0;
    for (int j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        count++;
        break;
      }
    }
    if (count == 0)
    {
      // printf("%d\n,", i);
      val = pow(2, i) - 1;
      for (int j = 2; j <= val / 2; j++)
      {
        if (val % j == 0)
        {
          count++;
          break;
        }
      }
      if (count == 0)
      {
        printf("%d,", val);
      }
    }
  }
}