#include <stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter any number:\n");
    scanf("%d",&num);
    for ( i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            sum+=i;
        }
        
    }
    if (sum==num)
    {
        printf("%d is perfect Number.\n",num);
    }
    else
        printf("%d is not perfect Number.\n",num);
    
    
    return 0;
}