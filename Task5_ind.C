#include <stdio.h>
#define _USE_OF_MATH
#include <math.h>
int main()
{
    double x, y, a1, a2, a, b, bb;
    printf("Print x, y: ");
    scanf("%lf %lf", &x, &y);

    a1=(exp(x)-((y*y+12*x*y-3*x*x)/(18*y-1)));

    a=(12*y-4);
    bb=(x+1);
    b=sqrt(bb);

    a2=((1+sin(M_PI*b))/(cos(M_PI*a)));

    printf("v1=%.5lf\nv2=%.5lf\n", a1, a2);

    return 0;
}