#include <stdio.h> 

int main() 
{ 
    double a, b, s; 
    printf("a,b - ? \n");  
    printf("a= "); 
    scanf("%lf", &a); 
    printf("b= ");  
    scanf("%lf", &b); 
     
    s = a * b; 
     
    printf("S = %lf", s); 
 
    return 0; 
}