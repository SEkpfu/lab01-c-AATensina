#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main(void)
{
    double h, d, v, s, r, l1, l;
    const double PI=3.14159;
    printf("Height");
    scanf("%lf", &h);
    printf("Diameter");
    scanf("%lf", &d);

    r=d/2;
    v=(1.0/3.0)*PI*r*r*h;

    l1=r*r+h*h;
    l=sqrt(l1);
    s=PI*r*l+PI*r*r;

    printf("Volume=%f",v);
    printf("Square=%f",s);
    return 0;
}