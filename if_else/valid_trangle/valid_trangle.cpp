//write a c program to input all sides of a triangle and check whether triangle in valid or not.
#include <stdio.h>
int main()
{
    int a = 20;
    int b = 30;
    int c = 40;
    if (((a + b) > c) && ((b + c) > a) && ((c + a) > b))
    {
        printf("This Triangle Valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
}