#include <stdio.h>
int main()
{
    int sum=0,num,a,b;
    printf("Enter any number:\n");
    scanf("%d",&num);
    while (num!=0)
    {
        a=num%10;
        b=num/10;
        sum=sum+a;
        num=b;
    }
    printf("Sum of digit: %d\n",sum);
    return 0;    
}