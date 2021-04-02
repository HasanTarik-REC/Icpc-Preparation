#include <stdio.h>
int main()
{
    int i,num,a,b,p,sum=0;
    printf("Enter any number:\n");
    scanf("%d",&num);
    p=num;
    while (p!=0)
    {
        a=p%10;
        b=p/10;
        sum=(sum*10)+a;        
        p=b;
    }
    if(sum==num){
        printf("%d is palindrome Number.\n",num);
    }
    else
         printf("%d is not palindrome Number.\n",num);
    
    return 0;  
}