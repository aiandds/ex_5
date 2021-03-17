#include <stdio.h>

int main (void)
{
    float c,f;
    
    printf("Enter the centigrade :- ");
    scanf("%f",&c);

    f = (1.8 * c) + 32;

    printf("The fahrenheit = %.2f\n",f);

    return 0;



}
