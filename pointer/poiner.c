#include <stdio.h>
int main()
{
    /*  int x = 2, y = 7, *p, *q;
     p = &x;
     q = &y;
     p = q;
     printf("%d%d%d%d", x, y, p, q);
     *p = 3;
     *q = 4;
     x = y;
     printf("%d%d%d%d", x, y, p, q); */

    int v = 2;
    printf("AddValue of v=%u", &v);
    printf("\n value of =%d", v);
    printf("\n value of v =%d", *(&v));
    return 0;
}