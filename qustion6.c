#include<stdio.h>
int main()
{
    int year;
    printf("Enter year :");
    scanf("%d",&year);
    switch(year%100==0)
    {
        case 0:
                switch(year%4==0)
                {
                    case 0: 
                        printf("non-leap year");
                        break ;
                    case 1:  // '1' means case true.
                        printf("Yes,leap year");
                        break ;
                }
                break ;
        case 1:
                switch(year%400==0)
                {
                    case 0: // '0' means case fail.
                        printf("Non-leap year");
                        break ;
                    case 1:
                        printf("Yes,leap year");
                        break ;
                }
                break ;
    }
    return 0;
}