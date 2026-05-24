#include <stdio.h>
#include <string.h>
int main()
{
  char str[100], word[100];
  int i, j = 0, len, length;
  printf("Enter the String : ");
  scanf("%[^\n]s", str);

  for (int i = 0; str[i] != '\0'; i++)
  {

    if (str[i] != ' ')
    {
      word[j++] = str[i];
    }
    else
    {
      j = 0;
      len = strlen(word) - 1;
      while (len >= 0)
      {
        printf("%c", word[len--]);
      }
    }
  }
}