#include<stdio.h>
int main()
{
    int num,count=0,sum=0,a,b;
    printf("Enter any number:\n");
    scanf("%d",&num);
    while (num!=0)
    {
        
        a=num%10;
        b=num/10;
        sum=sum*10+a;
        num=b;
    }
    printf(" Reverse Number:  %d \n",sum);
    return 0;
    
}