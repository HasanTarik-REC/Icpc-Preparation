#include<stdio.h>
int main()
{
    int num,i,p=1;
    printf("Enter Size of Floyd’s triangle:\n");
    scanf("%d",&num);
    for (i = 1; i <= num; i++)
    {
        for (int j = 1; j <=i; j++)
        {
        printf("%d ",p);
        p++; 
        }        
        printf("\n");
    }
    return 0;  
}