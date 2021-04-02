#include <stdio.h>
int main()
{
    int i,sum=0,num,p,a,b;
    printf("Enter any number:\n");
    scanf("%d",&num);
    p=num;
    while (p!=0)
    {
        
        a=p%10;
        b=p/10;
        sum=sum+(a*a*a);
        p=b; 
    }
    if(sum==num){
        printf("%d is Armstrong Number.\n",num);
    }
    else
        printf("%d is not Armstrong Number.\n",num);
    
}