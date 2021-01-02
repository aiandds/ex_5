#include <stdio.h>

int main (void)
{
    float height, base, area;

    printf("enter the height and base of the triangle:- ");
    scanf("%f%f",&height,&base);

    area = height *base /2;

    printf("the area of the triangle = %f\n",area);

    return 0;



}