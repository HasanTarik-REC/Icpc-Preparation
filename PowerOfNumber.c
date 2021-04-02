#include<stdio.h>
#include <math.h>
int main()
{
    printf("Find power using library function:\n");
    double num,result,p;
    printf("Enter any Number:\n");
    scanf("%lf",&num);
    printf("Enter power:\n");
    scanf("%lf",&p);
    result=pow(num,p);
    printf("%0.2lf \n",result);

    printf("\n\nFind power not using library function:\n");
    int number,result1,power;
     printf("Enter any Number:\n");
    scanf("%d",&number);
    printf("Enter power:\n");
    scanf("%d",&power);
    for (int  i = 1; i <= power; i++)
    {
       result1=number*(i*i);
    }
    printf("%d \n",result1);
    
    return 0;
}