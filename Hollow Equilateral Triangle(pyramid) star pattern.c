#include<stdio.h>
int main()
{
    int row,col,n;
    n=4;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
            printf(" ");
        for(col=1;col<=2*row-1;col++)
        {
            if(col==1||col==2*row-1||row==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;
}
