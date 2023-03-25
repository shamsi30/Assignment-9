#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D,x,y;
    printf("Enter the three values of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    D=b*b-4*a*c;
    printf("D=%d\n",D);
    switch(D<0)
    {
        case 0:
            switch(D==0)
            {
                case 0:
                    
                    printf("Roots are real and distinct(uneqaul)\n");
                    x = -b + powf(D,0.5);
                    y = -b - powf(D,0.5);
                    printf("First root=%d and Second root=%d",x,y);
                    break;
                case 1:
                    printf("Roots are real and eqaul\n");
                    x = -b;
                    printf("First root=%d and Second root=%d",x,x);
                    break;
            }
            break;
        case 1:
            printf("Roots are imaginary and unequal means no defined");
            break;
    }
    return 0;
}