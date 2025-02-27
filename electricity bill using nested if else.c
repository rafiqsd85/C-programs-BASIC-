#include<stdio.h>
int main()
{
    int category;
    float u;//u means unit
    printf("Select your category 1 or 2 (1.Domestic and 2.Commercial): ");
    scanf("%d",&category);
    if(category==1)
    {
       printf("Enter the unit: ");
       scanf("%f",&u);
       if(u<=100)
        printf("Electricity Bill: %.2f BDT",u*3.5);
       else if(u>=101 && u<=300)
        printf("Electricity Bill: %.2f BDT",u*4.5);
       else if(u>=301 && u<=500)
        printf("Electricity Bill: %.2f BDT",u*5.5);
       else
        printf("Electricity Bill: %.2f BDT",u*6.5);
    }
    else if(category==2)
    {
       printf("Enter the unit: ");
       scanf("%f",&u);
       if(u<=100)
        printf("Electricity Bill: %.2f BDT",u*5.00);
       else if(u>=101 && u<=300)
        printf("Electricity Bill: %.2f BDT",u*6.5);
       else if(u>=301 && u<=500)
        printf("Electricity Bill: %.2f BDT",u*7.5);
       else
        printf("Electricity Bill: %.2f BDT",u*8.5);
    }
    else
    {
        printf("Please select the correct option!");
    }
return 0;
}
