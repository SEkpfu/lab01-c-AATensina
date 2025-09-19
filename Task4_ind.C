#include <stdio.h>
int main(void)
{
    int x,y,a,b;
    printf("x=");
    scanf("%d", &x);
    a=x*x;
    b=a*a;
    y=(a*(b*b-b+3)-2);
    printf("y=%d", &y);
    return 0;
}
