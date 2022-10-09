#include <stdio.h>
int main()
{
    char c=12;
    if (c >= 65 && c <= 90)
    {
        printf("%c,is Uppercase Alphabet");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("%c,is Lowercase Alphabet");
    }
    else
    {
        printf("Please Try again");
    }
}