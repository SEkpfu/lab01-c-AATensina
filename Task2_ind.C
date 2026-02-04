#include <stdio.h>
int main(void)
{
    int a, b, c, d, aa;
    printf("a=");
    scanf("%d", &a);
    b=a%10;
    c=a/100;
    d=a/10%10;
    aa=100*b+10*d+c;
    printf("new a= %d", aa);

    return 0;
}