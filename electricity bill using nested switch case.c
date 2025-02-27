#include<stdio.h>
int main()
{
    int category,unit;
     float bill=0;
    printf("Select your category 1 or 2 (1.Domestic and 2.Commercial): ");
    scanf("%d",&category);

    switch (category)
    {
    case 1:
        printf("Please enter unit value :");
        scanf("%d", &unit);
        switch (unit)
        {
        case 0 ... 100:
            bill = unit * 3.5;
            break;

        case 101 ... 300:
            bill = unit * 4.5;
            break;

        case 301 ... 500:
            bill = unit * 5.5;
            break;

        default:
            bill = unit * 6.5;
        }
        break;

    case 2:
        printf("Please enter unit value :");
        scanf("%d", &unit);
        switch (unit)
        {
        case 0 ... 100:
            bill = unit * 5;
            break;

        case 101 ... 300:
            bill = unit * 6.5;
            break;

        case 301 ... 500:
            bill = unit * 7.5;
            break;

        default:
            bill = unit * 8.5;
        }
        break;

    default:
        printf("Please select the correct option!");
        return 1;
    }

    printf("\nTotal Electricity Bill= %.2f BDT",bill);
    return 0;
}
