#include <stdio.h>
int main()
{
    int a, b, c;
    // printf()
    // scanf()
    if (a == b && b == c)
    {
        printf("The Given Triangle is equilateral\n");
    }
    else if (a == b || b == c || c == a)
    {
        printf("The given Triangle is isosceles\n");
    }
    else
    {
        printf("The Given Triangle is scalene\n");
    }
    return 0;
}