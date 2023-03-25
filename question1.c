#include<stdio.h>
int main()
{
    int n;
    printf("Enter month number :");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("month name = January");
            printf("\nNo of total days in january month = 31");
            break ;
        case 2:
            printf("month name = February");
            printf("\nNo of total days in february month is 28 or 29 depend upon leap year");
            break ;
        case 3:
            printf("month name = March");
            printf("\nNo of total days in february month = 31");
            break ;
        case 4:
            printf("month name = April");
            printf("\nNo of total days in april month =30");
            break ;
        case 5:
            printf("month name = May");
            printf("\nNo of total days in may month=31");
            break ;
        case 6:
            printf("month name = June");
            printf("\nNo of total days in june month=30");
            break ;
        case 7:
            printf("month name = july");
            printf("\nNo of total days in july month=31");
            break ;
        case 8:
            printf("month name = August");
            printf("\nNo of total days in august month=31");
            break ;
        case 9:
            printf("month name = September");
            printf("\nNo of total days in september month=30");
            break ;
        case 10:
            printf("month name = October");
            printf("\nNo of total days in october month=31");
            break ;
        case 11:
            printf("month name = November");
            printf("\nNo of total days in november month=30");
            break ;
        case 12:
            printf("month name = December");
            printf("\nNo of total days in december month=31");
            break ;
        case 13:
            printf("\nInvalid input");
    }
    return 0;
}