#include <stdio.h>
int main()
{
    char A[100],B[100],C[100];
    int i;
    printf("Enter first String:\n");
    gets(A);
    int lengthOfA=strlen(A);
    printf("Enter Second String:\n");
    gets(B);
    int lengthOfB=strlen(B);
    printf("Before Swapping:\n");
    printf("%s \n",A);
    printf("%s \n",B);
    for (i = 0; i <=lengthOfA+10; i++)
    {
       C[i]=A[i];
    }
    for (i = 0; i <=lengthOfB+10; i++)
    {
       A[i]=B[i];
    }
    for (i = 0; i <=lengthOfA+10; i++)
    {
       B[i]=C[i];
    }
    printf("After Swapping:\n");
    printf("%s \n",A);
    printf("%s \n",B);

    
   
    return 0;
}