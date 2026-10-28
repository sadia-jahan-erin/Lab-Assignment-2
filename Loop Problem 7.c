#include <stdio.h>
 int main(){
   int n;
    printf("Enter the Number: ");
     scanf("%d", &n);
     int rev=0;
    while (n>0){
      int d = n % 10;
        rev *= 10;
        rev += d;
        n /= 10;
    }

     printf("%d", rev);

  return 0;
 }
