#include <stdio.h>
int main()
{
    char c = 'e';
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c is vowel", c);
    }
    else
    {
        printf("%c is consonant", c);
    }

    return 0;
}