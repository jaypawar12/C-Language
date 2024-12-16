

#include <stdio.h>

int main()
{
    int i=1,n,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    
    {
        fact*=i;
    }
    printf("Facttorial =%d",fact);
    return 0;
}