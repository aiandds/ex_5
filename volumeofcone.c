#include <stdio.h>

int main (void)
{
    float volume, pi, radius, height;

    printf("enter the radius and height of the cone:- ");
    scanf("%f %f",&radius,&height);

    pi = 3.14159;

    volume = (pi * radius * radius * (height / 3));

    printf("the volume of the cone = %f\n",volume);

    return 0;



}