#include <stdio.h>
int main()
{
    int n = 100;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is a even number \n", i);
        }
        // printf("%d\n", i);
    }
    return 0;
}