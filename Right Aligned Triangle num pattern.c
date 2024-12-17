#include<stdio.h>
int main()
{
    int row,col,n;
    n=4;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
            printf(" ");
        for(col=n-row+1;col<=n;col++)
            printf("%d",col);
        printf("\n");
    }
return 0;
}
