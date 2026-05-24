#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
  int n,sum=0;
  printf("Enter a number: ");
  scanf("%d",&n);

  //aproach 1
  // for(int i=1; i<=n; i++){
  //   sum += i;
  //   if(sum==n){
  //     printf("Yes");
  //     exit(0);
  //   }
  // }
  // printf("NO");  

  //aproach2
  for (int i=1; i<=n; i++){
      if(i==(-1+ (sqrt(1+8*n)))/2){
        printf("Yes");
        exit(0);
      }
  }
  printf("NO");
  return 0;
}