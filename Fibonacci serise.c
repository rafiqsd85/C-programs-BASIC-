#include<stdio.h>
int main()
{
    int first=0,second=1,count=0,fibo,n;
    printf("Enter the numbers of terms in fibonacci series: ");
    scanf("%d",&n);
    while(count<n){
    if(count<=1){
        fibo=count;
    }
    else{
        fibo=first+second;
        first=second;
        second=fibo;
    }
    printf("%d\t",fibo);
    count++;
    }

return(0);
}
