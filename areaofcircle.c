#include <stdio.h>

int main (void)
{
    float radius, area, pi;

    printf("enter the radius of the circle:- ");
    scanf("%f",&radius);
    

    pi = 3.14159;
    area = pi * radius * radius;

    printf("the area of the circle = %.0f\n",area);

    return 0;



}
