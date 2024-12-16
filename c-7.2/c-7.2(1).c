#include <stdio.h>

int main() 
{
    int j,i,k;
    
    for(i=1; i<=5; i++)
    {
        k=i;
        for(j=1; j<=5; j++)
        {
          
          if(j>=6-i)  
          {
            printf("%d",k);
            k--;
          }
          else
          {

            printf(" ");
          }
          
        }
        printf("\n");
    }
    
    return 0;
}