#include<stdio.h>
int main(){
  char *str;
  scanf("%[^\n]s",str);
  while(*str!='\0'){
    if((*(str+1)!=' ')&& (*(str+1)!='\0'))
     printf("%c",*str);
    str++;
  }
  return 0;
}