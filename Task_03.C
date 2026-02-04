#include <stdio.h>

int main()
{
   double c, f, k;
   printf("tC: ");
   scanf("%lf", &c);
   f = 1.8 * c + 32.0;
   k=c+273.0;
   printf("tF=%f", &f);
   printf("tK=%f", &k);
   return 0;
}