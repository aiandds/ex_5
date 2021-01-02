#include <stdio.h>

int main (void)
{
    float c,f;
    
    printf("Enter the centigrade :- ");
    scanf("%f",&c);

    f = c*(9.00/5.00)+32;

    printf("The fahrenheit = %.2f\n",f);

    return 0;



}