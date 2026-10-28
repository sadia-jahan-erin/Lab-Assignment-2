#include <stdio.h>
 int main(){
   int n;
    printf("Enter a Number: ");
     scanf("%d", &n);
      int count=0;
      while (n>0){
        count++;
        n/=10;
      }
    printf("%d", count);

    return 0

 }
