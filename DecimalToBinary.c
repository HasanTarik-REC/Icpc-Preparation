#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter any decimal Number:\n");
    scanf("%d",&n);
    int num[20],i=0,j,rem;
    while (n>0)
    {
        rem=n%2;
        num[i]=rem;
        i++;
        n=n/2;
    }
    printf("Binary Number is: \n");
    for (j = i-1; j>=0; j--)
    {
       printf("%d",num[j]);
    }
    return 0;
}