#include<stdio.h>
int main()
{
    int i,n,count;
    printf("Enter size of Pascal triangle:\n");
    scanf("%d",&n);
    
    for (i = 1; i <=n; i++)
    {
        count=n-i;
       for (int j =n-i; j >=1; j--)
           printf("  ");
       for (int a = 1; a<=i; a++)
           printf("%d ",a); 
           if(i>1){
       for (int j =n-count-1; j>=1; j--){
           printf("%d ",j);
           }
       }          
       printf("\n");
       
    }
   
    
    return 0;
}