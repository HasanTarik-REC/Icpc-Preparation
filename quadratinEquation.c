#include<stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,x1,x2;
    printf("Enter a, b and c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("x1=%0.2lf \n",x1);
    printf("x2=%0.2lf \n",x2);
    return 0;

}