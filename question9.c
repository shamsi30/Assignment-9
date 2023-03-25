// wap to convert even number into it's uppper nearest odd number

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 0:
            printf("num=%d",n);
            break;
        case 1:
            printf("It's uppper nearest odd number is %d",n+1);
            break;
    }
    return 0;
}