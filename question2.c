#include<stdio.h>
int main()
{
    int choice,x,y;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.multiplication\n");
    printf("4.Exit\n");
    printf("Enter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter two numbers :");
            scanf("%d %d",&x,&y);
            printf("sum of %d and %d is equal to %d",x,y,x+y);
            break ;
        case 2:
            printf("Enter two numbers :");
            scanf("%d %d",&x,&y);
            printf("subtraction of %d and %d is equal to %d",x,y,x-y);
            break ;
        case 3:
            printf("Enter two numbers :");
            scanf("%d %d",&x,&y);
            printf("multiplication of %d and %d is equal to %d",x,y,x*y);
            break ;
        case 4:
            printf("Enter two numbers :");
            scanf("%d %d",&x,&y);
            printf("division of %d and %d is equal to %d",x,y,x/y);
            break ;
        case 5:
            printf("Exit");
            break ;
    }
    return 0;
}