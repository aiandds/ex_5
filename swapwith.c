#include <stdio.h>

int main (void)
{
    int a, b, sw;
    
    printf("Enter two number A & B :- ");
    scanf("%d %d",&a,&b);

    printf("Before swapping A and B we get A = %d and B = %d\n",a,b);
    
    sw = a;
    a = b;
    b = sw;

    printf("After swapping A and B we get A = %d and B = %d\n",a,b);

    return 0;



}