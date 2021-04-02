#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter first Number:\n");
    scanf("%d",&num1);
    printf("Enter second Number:\n");
    scanf("%d",&num2);
    printf("Before swaping:\n");
    printf("Number 1: %d\n",num1);
    printf("Number 2: %d\n",num2);
    printf("After swaping:\n");
    num3=num1;
    num1=num2;
    num2=num3;
    printf("Number 1: %d\n",num1);
    printf("Number 2: %d\n",num2);
    return 0;
}