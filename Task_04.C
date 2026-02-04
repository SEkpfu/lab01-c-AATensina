#include <stdio.h>
int main()
{
    double v, r, f1;
    const double PI = 3.14159;
    printf("r=");
    scanf("%lf", &r);
    f1=r*r*r;
    v=(4.0/3.0)*PI*f1;
    printf("v=%f", v);

    return 0;
}