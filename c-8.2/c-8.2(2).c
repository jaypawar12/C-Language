#include <stdio.h>

int main()
{
   int n;
   float sum=0;
   
  printf("Enter the no. of array that you want :");
  scanf("%d",&n);
  
  int a[n][n],b[n][n],c[n][n];
  
    printf("\nEnter the element of array a\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
      
    }
    
    printf("\nEnter the element of array b\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
      
    }
     
    printf("\nHe sum of all the elements of a and b are :\n");
      
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\n",c[i][j]);
        }
    }
     
    return 0;
}
