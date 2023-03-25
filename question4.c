#include<stdio.h>
int main()
{
        int a,b,c;
        char choice;
        printf("a. check whether a given set of three numbers are lengths of isosceles triangle or not\n");
        printf("b. check whether a given set of three numbers are lengths of side of a right angled triangle or not\n");
        printf("c. check whether a given set of three numbers are equilateral triangle or not\n");
        printf("d. Exit\n");
        printf("Enter your choice :");
        scanf("%C",&choice);
        switch(choice)
        {
            case 'a':
                printf("Enter the sides of triangle :");
                scanf("%d %d %d",&a,&b,&c);
                if(a==b || b==c || a==c)
                    printf("Iscosceles triangle");
                else
                    printf("Not iscosceles");
                break ;

            case 'b':
                printf("Enter the sides of triangle :");
                scanf("%d %d %d",&a,&b,&c);
                if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
                    printf("Right angled triangle");
                else
                    printf("Not right angled");
                break ;

            case 'c':
                printf("Enter the sides of triangle :");
                scanf("%d %d %d",&a,&b,&c);
                if(a==b && b==c && a==c)
                    printf("Equilateral triangle");
                else
                    printf("Not equilateral");
                break ;

            case 'd':
                printf("Exit");
                break;
        }
    return 0;
}