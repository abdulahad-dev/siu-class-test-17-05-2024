#include<stdio.h>

int main()
{
    int number, multiple;
    printf("Enter your number : ");
    scanf("%d", &number);

    for(int i = 1; i <= 10; i++){
        multiple = number * i;
        printf("%d X %d = %d\n", number, i, multiple);
    }

    return 0;
}
