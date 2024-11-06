#include<stdio.h>
int main()
{
    int num,i,next;
    printf("Enter the number of terms in lucas series: ");
    scanf("%d",&num);

    int frist=2,second=1;
    printf("lucas series up to %d terms: \n",num);
    printf("%d %d ",frist,second);

     for(i=3;i<=num;i++)
       {
          next=frist+second;
          printf("%d ",next);
          frist=second;
          second=next;
       }
     printf("\n");

 return 0;
}
