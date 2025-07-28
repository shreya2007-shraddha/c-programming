#include <stdio.h>
#include <stdlib.h>

int main()
{float p,r,t,si;

    printf("enter principal ammount:\n");
    scanf("%f",&p);

    printf("enter rate of interest:\n");
    scanf("%f",&r);

    printf("enter period of time (in years):\n");
    scanf("%f",&t);

    si = (p*r*t) / 100;

    printf("simple intrest = %.2f \n" , si);

    return 0;
}
