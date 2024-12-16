#include <stdio.h>

int main()
{
  int n1,n2;
  float average,sum=0;
   
    printf("Enter the array's row size: ");
    scanf("%d",&n1);
    
    printf("Enter the array's column size: ");
    scanf("%d",&n2);
  
    int a[n1][n2];
  
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
            sum+=a[i][j]; 
        }
      
    }

    printf("\nAverage of an Array: %.2f\n",sum/(n1*n2));
   
    return 0;
}

