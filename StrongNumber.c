#include <stdio.h>
int main()
{
    int i,num,sum=0,fact=1,p,a,b;
    printf("Enter any number:\n");
    scanf("%d",&num);
    p=num;
    while (p!=0)
    {
        a=p%10;
        b=p/10;
        for (i = 1; i <=a; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;
        p=b;
    }
    if (sum==num)
    {
        printf("%d is Strong Number.\n",num);
    }
    else
        printf("%d is not Strong Number.\n",num);
    
    
}