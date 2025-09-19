#include <stdio.h>
int main()
{
    double a, a1, a2;
    printf("Введите четырехзначное число:");
    scanf("%d", &a);
    if (a<1000)
    {
        printf("Число не четырехзначное");
    }
    a1=a/10;
    a2=a%10;
    printf("Первая цифра =%d",a1);
    printf("Последняя цифра =%d",a2);

    return 0;
}
