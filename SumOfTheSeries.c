///Sum of the series:  1+2+3+4+......+m=sum;
#include <stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter last number of the series (n):\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum of the series: %d \n ",sum);
    for (i = 1; i <n; i++)
    {
        printf("%d+",i);
    }
    printf("%d=%d\n",n,sum);
    return 0;    
}


