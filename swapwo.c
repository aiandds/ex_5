#include <stdio.h>

int main (void)
{
    int a, b;
    
    printf("Enter two number A & B :- ");
    scanf("%d %d",&a,&b);

    printf("Before swapping A and B we get A = %d and B = %d\n",a,b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("After swapping A and B we get A = %d and B = %d\n",a,b);

    return 0;



}