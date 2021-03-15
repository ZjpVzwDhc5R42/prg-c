#include <stdio.h>

int main() 
{
    
    int a, b, c;
    scanf("%d", &a);
    printf("enter an integer\n");
    
    for (b=1; b<=a; b++)
    {
        for(c=1; c <= 2*a-1; c++)
        {
            if(c >= a-(b-1) && c <= a+(b-1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }       
    return 0;
}    