#include <stdio.h>

int main (void)
{
    int volume, edge;

    printf("enter the edge of the cube:- ");
    scanf("%d",&edge);

    volume = edge * edge * edge;

    printf("the volume of the cube = %d\n",volume);

    return 0;



}