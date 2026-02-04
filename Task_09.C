#include <stdio.h> 
#include <math.h> 
int main()
{
    int seconds, minutes, hours, seconds1; 
    printf("kolichestvo seconds = "); 
    scanf("%d", &seconds1);
    
    seconds = seconds1 % 60; 
    minutes = (seconds1 % 3600) / 60; 
    hours = seconds1 / 3600;

    printf("hours: %d\nminutes: %d\nseconds: %d", hours, minutes, seconds);

    return 0;
}