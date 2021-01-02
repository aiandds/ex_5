#include <stdio.h>

int main (void)
{
    float volume, pi, radius;

    printf("enter the radius of the sphere:- ");
    scanf("%f",&radius);

    pi = 3.14159;
    volume = (((4.00/3.00) * pi)* (radius * radius * radius))  ;

    printf("the volume of the sphere = %f\n",volume);

    return 0;



}