
#include <stdio.h>                                      

int main()
{
    int n,i,a=0,b=1,s;
    printf("Enter the number:");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)
    {
        printf("fibonasi series is :%d\n",a);
        s=a+b;
        a=b;
        b=s;                                        
    }

    return 0;
}