#include <stdio.h>
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  // num%2 ? printf(" number is odd") : printf(" number is even");
    (num&1)? printf(" number is odd") : printf(" number is even");
}