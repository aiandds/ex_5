#include <stdio.h>

int main (void)
{
    int num;
    float radius, ac, ar, at,length, width, height, base, vc, vs, pi, rc, rs, hc;
    pi = 3.14159;


    printf("***************************\n");
    printf("Area of Circle    --> 1\n");
    printf("Area of Rectangle --> 2\n");
    printf("Area of Triangle  --> 3\n");
    printf("Volume of Cone    --> 4\n");
    printf("Volume of Sphere  --> 5\n");
    printf("***************************\n");
    printf("Enter Respective number\n");
    scanf("%d", &num);

    switch(num)
    {
    case 1:

        printf("To find the area of the circle enter the radius :- ");
        scanf("%f",&radius);

        ac = pi * radius * radius;

        printf("The area of the circle with radius %.0f = %.2f\n",radius, ac);

        break;

    case 2:
        printf("To find the area of the rectangle enter the length and width  :- ");
        scanf("%f%f",&length,&width);

        ar = length * width;

        printf("The area of the rectangle with length %.0f and width %.0f  = %.2f\n",length ,width,ar);

        break;

    case 3:
    
        printf("To find the area of the triangle enter the height and base :- ");
        scanf("%f%f",&height,&base);

        at = height *base /2;

        printf("The area of the triangle with height %.0f and base %.0f  = %.2f\n",height, base,at);

        break;

    case 4:
        printf("To find the volume of the cone enter the radius and height :- ");
        scanf("%f %f",&rc,&hc);

        vc = (pi * rc * rc * (hc / 3));
        printf("The volume of the cone with radius %.0f and height %.0f = %.2f\n",rc, hc, vc);

        break;

    case 5:
        printf("To find the volume of the sphere enter the radius :- ");
        scanf("%f",&rs);

        vs = (((4.00/3.00) * pi)* (rs * rs * rs));

        printf("The volume of the sphere with radius %.0f  = %.2f\n",rs, vs);

        break;


    }
    
    
    


    return 0;



}
