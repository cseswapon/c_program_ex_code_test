#include <stdio.h>
int main()
{
    // int a[5] = {12, 34, 36, 78, 98};
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}