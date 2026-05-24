#include <stdio.h>
int main(){
  char *str;
  printf("Enter a character: ");  // Prompt user to enter a character
  // scanf("%[^(a)^(b)^(@)]s",str);
  scanf("%[^\n]s",str); //termineting character for newline

  while (*str!='\0')
  {
    if (*str==' ')
      printf("\n");
    else
     printf("%c",*str);
    str++;
  }
  return 0;
}
