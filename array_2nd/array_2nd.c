#include<stdio.h>
int main(){
    int a[5][4], i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter value for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Total Value is %d", a[2][3]);
    return 0;
}
