#include<stdio.h>
int main()
{
    int var;
    printf("Enter a variable number :");
    scanf("%d",&var);
    switch(var==1)
    {
        case 0:
                switch(var==2)
                {
                    case 0:
                            switch(var==3)
                            {
                                case 0:
                                    printf("Invalid");
                                    break ;
                                case 1:
                                    printf("best");
                                    break ;
                            }
                            break ;
                    case 1:
                        printf("better");
                        break ;
                }
                break ;
        case 1:
            printf("good");
            break ;
    }
    return 0;
}