#include <stdio.h>
int main()
{
    int number = 55;
    /* printf("Enter a Number");
    scanf("%d", &number); */
    if (number % 5 == 0 && number % 11 == 0)
    {
        printf("This number with divisible 5 and 11");
    }
    else
    {
        printf("This number not divisible");
    }
    return 0;
}