#include <stdio.h>
int main()
{
    int i,fibo,n,firstNum,secondNum,count=0;
    printf("Enter Series Range:\n");
    scanf("%d",&n);
    n=n-2;
    firstNum=0;
    secondNum=1;
    printf("%d ",firstNum);
    printf("%d ",secondNum);
    while(count!=n){
        fibo=firstNum+secondNum;
        firstNum=secondNum;
        secondNum=fibo;
        count++;
        printf("%d ",fibo);      
    }
    return 0;

}