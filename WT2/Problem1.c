#include <stdio.h>
int main()
{
  int gray[20], bin[20];
  int i, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &gray[i]);
  bin[0] = gray[0];
  for (i = 1; i < n; i++)
    bin[i] = bin[i - 1] ^ gray[i];
  for (i = 0; i < n; i++)
    printf("%d", bin[i]);
  return 0;
}