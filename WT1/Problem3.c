#include <stdio.h>
int rev=0;
int reverse(int n)
{
  int rem;
  if (n)
  {
    rem = n % 10;
    rev = rev * 10 + rem;
    reverse(n / 10);
  }
  else
    return rev;
}
int main()
{
  int n;
  scanf("%d", &n);
  printf("%d", reverse(n));
  return 0;
}