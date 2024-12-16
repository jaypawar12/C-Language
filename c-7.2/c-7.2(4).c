#include <stdio.h>

int main() 
{
    int i,j;
    int n = 5;
    
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        for(j = 0; j < n - i; j++)
        {
            if ((i + j) % 2 == 0)
            printf("1");
            
            else
            printf("0");
        }
        printf("\n");
    }
    return 0;
}