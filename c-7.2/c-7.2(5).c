#include <stdio.h>

int main() 
{
    int j,i,k;
    
    for(i=1; i<=5; i++)
    {
        k=5;
        for(j=1; j<=5; j++)
        {
          
          if(j>=i)  
          {
            printf("%d",6-j);
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



