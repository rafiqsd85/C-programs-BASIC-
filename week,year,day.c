#include <stdio.h>

int main()
{
    int d,w,y,m;
    printf("\n please enter the numbers of days: ");
    scanf("%d",&d);
    y=d/365;
    m=(d%365)/30;
    w=((d%365)%30)/7;
    d=((d%365)%30)%7;
    printf("Yaers=%d\n",y);
    printf("Months=%d\n",m);
    printf("Weeks=%d\n",w);
    printf("Days=%d\n",d);

    getch(0);
}


