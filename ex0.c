#include <stdio.h>
double sq(double a){
    a=a*a*a;
}
void main()
{
    double a;
    scanf("%lf",&a);
    a=sq(a);
    printf("%lf",a);
}
