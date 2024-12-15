#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,n1,n2,rem,lcm,gcd;
    printf("Enter 4 number= ");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

    //print GCD
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;

    n1=gcd;
    n2=num3;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;

    n1=gcd;
    n2=num4;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;

    printf("GCD=%d\n",gcd);

//print LCM

    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;
    n1=lcm;
    n2=num3;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(lcm*num3)/gcd;
    n1=lcm;
    n2=num4;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(lcm*num4)/gcd;

    printf("LCM=%d\n",lcm);

  return 0;
}
