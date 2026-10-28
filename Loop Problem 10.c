#include <stdio.h>
 int main(){
  int n;
    printf("Enter a number: ");
     scanf("%d", &n);
    if(n<2){
      printf("%d is neither prime nor composite", n);
  return 0;
    }
  int isPrime = 1;
  for (int i = 2; i < n; i--){
     if(n % i== 0){
        isPrime = 0;
         break;
     }
  }
 if (isPrime == 1) {
        printf("%d is prime", n);
    } else {
        printf("%d is composite", n);
    }

    return 0;
 }
