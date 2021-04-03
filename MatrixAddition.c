#include <stdio.h>
int main()
{
    int A[100][100],B[100][100],C[100][100];
    int i,n,j;
    printf("Enter matrix size:\n");
    scanf("%d",&n);
    printf("Enter First Matrix:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <n; j++)
        {
            printf("Enter Element [%d][%d] :",i,j);
            scanf("%d",&A[i][j]);
        } 
    }
    printf("\nEnter Second Matrix:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <n; j++)
        {
            printf("Enter Element [%d][%d] :",i,j);
            scanf("%d",&B[i][j]);
        } 
    }
    printf("\nFirst Matrix:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <n; j++)
        {
            printf("%d ",A[i][j]);
        } 
        printf("\n");
    }
    printf("\nSecond Matrix:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <n; j++)
        {
            printf("%d ",B[i][j]);
        } 
        printf("\n");
    }
    printf("\n\nAddition Matrix:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <n; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        } 
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <n; j++)
        {
            printf("%d ",C[i][j]);
        } 
        printf("\n");
    }


  return 0;  
}