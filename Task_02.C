#include <stdio.h>

int main()
{
    
    double a, b, sum, r, p;
    printf("a=:");
    scanf("%lf", &a);
    printf("b=:");
    scanf("%lf", &b);

    sum=a+b;
    if (a>=b)
    {
        r=a-b;
    }
    if (b>=a)
    {
        r=b-a;
    }
    
    p=a*b;

    printf("Sum = %f\nRazn = %f\nProizv = %f\n", sum, r, p);
    return 0;
}
