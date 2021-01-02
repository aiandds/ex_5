#include <stdio.h>

int main (void)
{
    float length, width, area;

    printf("enter the length and width of the rectangle :- ");
    scanf("%f%f",&length,&width);

    area = length * width;

    printf("the area of the rectangle = %f\n",area);

    return 0;



}