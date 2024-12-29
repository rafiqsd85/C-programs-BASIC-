#include<stdio.h>
int main()
{
    int row,col, n=5,count=1;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",count);
            count++ ;
        }
        printf("\n");
    }
return 0;
}
