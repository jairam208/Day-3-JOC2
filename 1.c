#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[20][20], i, j, row, col;
    printf("Enter the value of row and column : \n");
    scanf("%d%d", &row, &col);
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d", &a[i][j]);
    for(i=row-1; i>=0; i--)
        for(j=0; j<col; j++)
            printf("%d\n", a[i][j]);
}