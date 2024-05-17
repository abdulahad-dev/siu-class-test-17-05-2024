#include<stdio.h>

int main()
{
    int number;

    printf("Enter your number : ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("Wow! %d is even number.", number);
    }
    else
    {
        printf("Ops! %d is odd number.", number);
    }

    return 0;
}
