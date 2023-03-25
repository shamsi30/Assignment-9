/*wap to convert a positive number into negative
and negative into possitive*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n<0)
    {
        case 0:
            printf("%d of it's negative number is %d",n,n*(-1));
            break;
        case 1:
            printf("%d of it's positive number is %d",n,n*(-1));
            break;
    }
    return 0;
}