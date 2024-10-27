#include<stdio.h>
int main()
{
    int r;
    printf("\n Please enter the redius of circle : ");
    scanf("%d",&r);

    float pi,a,s;
    pi=3.1416;
    a=pi*r*r;
    printf("Area of the circle=%.1f inches\n",a);
    s=2*pi*r;
    printf("Perimeter of the circle=%.1f inches\n",s);



    getch(0);
}
