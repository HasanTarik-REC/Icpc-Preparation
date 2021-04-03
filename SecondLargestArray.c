#include <stdio.h>
int main()
{
    int A[100],large,SecondLarge,i,n;
    printf("Enter N:");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&A[i]);
    }
    large=A[0];
    SecondLarge=A[0];
    for ( i = 1; i <n; i++)
    {
        if(A[i]>large){
            SecondLarge=large;
            large=A[i];
        }
    }
    printf("The SecondLarge number of Array: %d \n",SecondLarge);
    return 0;   
}