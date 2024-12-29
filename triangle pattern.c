#include<stdio.h>
int main()
{
    int row,col,n=5;
    for(row=5;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            if(row%2!=0)
            {
                printf("*");
            }
            else
            {
                printf("%d",row);
            }
        }
        printf("\n");
    }
return 0;
}

