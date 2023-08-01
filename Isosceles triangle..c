#include<stdio.h>
int main()
{
    float a,b,Area;
    printf("Enter the value of a(meter):");
    scanf("%f",&a);
    printf("Enter the value of b(meter):");
    scanf("%f",&b);
    Area=(b*sqrt(a*a-b*b))/4;
    printf("The Area = %.2f sq-meter",Area);
}
