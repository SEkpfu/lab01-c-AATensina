#include <stdio.h>
int main()
{
    double a,b,c,v,s;
    printf("a= "); 
    scanf("%d", &a);
    printf("b= "); 
    scanf("%d", &b);
    printf("c="); 
    scanf("%d", &c);

    v=a*b*c;
    s=2*((a*b)+(b*c)+(a*c));

    printf("v=", v);
    printf("s=", s);

    return 0;
}