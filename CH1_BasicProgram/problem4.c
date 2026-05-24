#include <stdio.h>

int main() {
    char s[10];
  int n1,n2,n3,sum;
  fgets(s,sizeof(s),stdin);
  sscanf(s,"%d%d%d",&n1,&n2,&n3);
  printf("Numbers entered: %d, %d, %d\n",n1,n2,n3);
  sum = n1 + n2 + n3;
  printf("Sum: %d",sum);
    return 0;
}