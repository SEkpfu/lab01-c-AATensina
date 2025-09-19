#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, sum, summ, p;
    printf("Print a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    sum=a+b;
    summ=a+b+c;
    p=a*b*c;

    sum > 10 ? printf("sum: %.lf\nproizv: %.lf\n", summ, p) : printf("max between a and b: %.2lf\n", fmax(a, b));

    return 0;
}