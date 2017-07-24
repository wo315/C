/* electric.c -- calculates electric bills */
#include <stdio.h>
#define RATE1 0.13230   //rate for first 360 kwh
#define RATE2 0.15040   //rate for next 180 kwh
#define RATE3 0.30025   //rate for next 252 kwh
#define RATE4 0.34025   //rate for over 720 kwh
#define BREAK1 360.0    //first breakpoint for rates
#define BREAK2 468.0    //second breakpoint for rates
#define BREAK3 720.0    //third breakpoint for rates
#define BASE1 (RATE1 * BREAK1) //cost for 360 kwh
#define BASE2 (BASE1 + RATE2 * (BREAK2 - BREAK1)) // cost for 468 kwh
#define BASE3 (BASE1 + BASE2 + RATE3 * (BREAK3 - BREAK2)) // cost for 720 kwh
int main(void)
{
    double kwh;
    double bill;

    printf("Please enter the kwh used.\n");
    scanf("%lf", &kwh);
    if (kwh <= BREAK1)
	bill = RATE1 * kwh;
    else if (kwh <= BREAK2)
	bill = BASE1 + RATE2 * (kwh - BREAK1);
    else if (kwh <= BREAK3)
	bill = BASE2 + RATE3 * (kwh - BREAK2);    
    else
	bill = BASE3 + RATE4 * (kwh - BREAK3);

    printf("The charge for %.lf kwh is $%1.2f.\n", kwh, bill);

    return 0;
}

