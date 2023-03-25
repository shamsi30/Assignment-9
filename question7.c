#include<stdio.h>
int main()
{
    int unit;
    float total,totalFinal;
    printf("Enter your electricity bill:\n");
    scanf("%d",&unit);
    switch(unit<50)
    {
        case 0:
                switch(unit<150)
                {
                    case 0:
                        switch(unit<250)
                        {
                            case 0:
                                total = 50*0.5+100*0.75+100*1.2+(unit-250)*1.5;
                                break;
                            case 1:
                                total = 50*0.5+100*0.75+(unit-150)*1.2;
                                break;
                        }
                        break;
                    case 1:
                        total = 50*0.5+(unit-50)*0.75;
                        break;
                }
                break;
        case 1:
            total = unit*0.5;
            break;
    }
    totalFinal = total + 0.2*total; //for find 20% of the total
    printf("Total electricity bill of the user = %.2f rupees",totalFinal);
    return 0;
}