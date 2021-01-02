#include <stdio.h>

int main (void)
{
    float radius, ac, ar, at,length, width, height, base, vc, vs, pi, rc, rs, hc;


    // get value for circle
    printf("To find the area of the circle enter the radius :- ");
    scanf("%f",&radius);
    
    // get value for rectangle
    printf("To find the area of the rectangle enter the length and width  :- ");
    scanf("%f%f",&length,&width);

    // get value for triangle
    printf("To find the area of the triangle enter the height and base :- ");
    scanf("%f%f",&height,&base);

    // get value for cone
    printf("To find the volume of the cone enter the radius and height :- ");
    scanf("%f %f",&rc,&hc);

    // get value for sphere
    printf("To find the volume of the sphere enter the radius :- ");
    scanf("%f",&rs);

    // calculating area of circle
    pi = 3.14159;
    ac = pi * radius * radius;

    // calculating area of rectangle
    ar = length * width;

    // calculating area of triangle
    at = height *base /2;

    // calculating volume of cone
    vc = (pi * rc * rc * (hc / 3));


    // calculating volume of sphere
    vs = (((4.00/3.00) * pi)* (rs * rs * rs));


    //print area and volume
    printf("The solutions are\n");
    printf("The area of the circle with radius %.0f = %.2f\n",radius, ac);
    printf("The area of the rectangle with length %.0f and width %.0f  = %.2f\n",length ,width,ar);
    printf("The area of the triangle with height %.0f and base %.0f  = %.2f\n",height, base,at);
    printf("The volume of the cone with radius %.0f and height %.0f = %.2f\n",rc, hc, vc);
    printf("The volume of the sphere with radius %.0f  = %.2f\n",rs, vs);


    return 0;



}
