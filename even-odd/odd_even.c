#include<stdio.h>

int main(){

    //Prompting user to enter a number.
    int number;

        printf("Enter a number please: ");
        scanf("%d", &number);

    //As a even number is divisible by 2 and gives reaminder .
        if(number % 2 == 0){
          printf("%d is even number", number);
      }

        else{
          printf("The number is odd");
    }
      printf("\n");

    return 0;
  }
