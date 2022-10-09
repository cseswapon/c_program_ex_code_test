#include <stdio.h>
int sum(int num1, int num2);
int main()
{
    int a = 10, b = 20;
    int total;
    total = sum(a, b);
    printf("Total Summation of: %d", total);
    return 0;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}