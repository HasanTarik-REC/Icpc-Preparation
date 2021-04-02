#include <stdio.h>
int main()
{
    int i;
    printf("All Uparcase letters using ASCII Value:\n");
    for (i = 65; i < 91; i++)
    {
        printf("%c  ",i);
    }
    printf("\nAll lowarcase letters using ASCII Value:\n");
    for (i = 97; i < 123; i++)
    {
        printf("%c  ",i);
    }
    return 0;    
}