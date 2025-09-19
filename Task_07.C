#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
    int a, b, pa, pb, s;
    printf("a = "); 
    scanf("%d", &a);
    printf("b = "); 
    scanf("%d", &b);

    pa=a%10;
    pb=b%10;

    s=pa+pb;

    printf("Sum =%d", s);

    return 0;
}
