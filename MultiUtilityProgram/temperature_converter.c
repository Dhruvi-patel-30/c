#include <stdio.h>

int main()
{
    float temp;
   printf("enter the temperature in celsius:");
   scanf("%f", &temp);
   float f = (  temp * 9/5) + 32;
   printf("the temperature in fahrenheit is: %1.1f", f);
}
