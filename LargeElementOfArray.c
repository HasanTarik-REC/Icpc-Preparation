#include <stdio.h>
int main()
{
    int A[100],i,large,n;
    printf("How many elements in the array:\n");
    scanf("%d",&n);
    printf("Enter Array elenents:\n");
    for (i = 0; i < n; i++)
    {
      scanf("%d",&A[i]); 
    }
    large=A[0];
    for (i = 1; i <n; i++)
    {
        if (A[i]>large)
        {
            large=A[i];
        } 
    }
    printf("The large number is: %d \n",large);
    return 0; 
}