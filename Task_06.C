#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)

{
    double radius, height, volume, square;
   // const double M_PI;
    printf("r=");
    scanf("%lf", &radius);
    printf("h=:");
    scanf("%lf", &height);

    volume=M_PI*radius*2*height;
    square=2*M_PI*radius*(radius+height);

    printf("Volume=%lf\nSquare=%lf", volume, square);
    return 0;
}