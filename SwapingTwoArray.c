#include<stdio.h>
int main()
{
    int A[100],B[100],C[100],i,n;
    printf("Enter size of Array:\n");
    scanf("%d",&n);
    printf("Enter first array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element in %d index: ",i);
        scanf("%d",&A[i]);
    }
    printf("\nEnter Second array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element in %d index: ",i);
        scanf("%d",&B[i]);
    }
    printf("Before Swaping :\n");
    printf("\nFirst array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ",A[i]);
    }
     printf("\nSecond array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ",B[i]);
    }
    printf("\nAfter Swaping :\n");
    for (i = 0; i <n; i++)
    {
        C[i]=A[i];
    }
    for (i = 0; i <n; i++)
    {
        A[i]=B[i];
    }
    for (i = 0; i <n; i++)
    {
        B[i]=C[i];
    }
    printf("\nFirst array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ",A[i]);
    }
     printf("\nSecond array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ",B[i]);
    }   

    return 0;   

}