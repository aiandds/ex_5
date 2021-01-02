#include <stdio.h>

int main (void)
{
    float vc, vs, pi, rc, rs, hc;

    printf("enter the radius and height of the cone:- ");
    scanf("%f %f",&rc,&hc);

    printf("enter the radius of the sphere:- ");
    scanf("%f",&rs);

    pi = 3.14159;

    vc = (pi * rc * rc * (hc / 3));

    printf("The volume of the cone = %f\n",vc);

    vs = (((4.00/3.00) * pi)* (rs * rs * rs))  ;

    printf("The volume of the sphere = %f\n",vs);
    return 0;



}