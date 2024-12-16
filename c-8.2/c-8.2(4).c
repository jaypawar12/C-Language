#include <stdio.h>

int main()
{
    int i,j,n,sum=0,a[5][5];
    
    printf("\nEnter array's elements: \n");
    
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(i==0||i==4||j==0||j==4)
            {
                printf("%d",a[i][j]);
                sum+=a[i][j];
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    printf("\nThe sum of boundary elements of an Array: %d",sum);

    return 0;
}