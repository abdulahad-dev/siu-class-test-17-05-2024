#include<stdio.h>

int main()
{
    int number;
    printf("Enter your number : ");
    scanf("%d", &number);


    if(number % 2 == 0 && number % 5 == 0){
        printf("Wow! %d is good number.", number);
    }
    else{
        printf("Ops! %d is not a good number.", number);
    }

    return 0;
}
