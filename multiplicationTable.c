#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter a number for generate multiplication table:\n");
    scanf("%d",&num);
    for (i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    printf("\n");
    return 0;
    
}