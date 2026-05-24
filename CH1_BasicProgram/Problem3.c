#include <stdio.h>
int main()
{
  char *str;
  int count = 0;
  printf(" enter the string: ");
  scanf("%[^\n]s", str);
  while (*str != '\0')
  {
    if (*str == ' ')
    {
      printf("\n");
      for (int i = 1; i <= count; i++)
        printf(" ");
    }
    else
    {
      count++;
      printf("%c", *str);
    }
    str++;
  }
  return 0;
}