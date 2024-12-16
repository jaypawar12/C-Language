#include <stdio.h>

int main()
{ 
    int a,b,c;
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    printf("C=");
    scanf("%d",&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("The minimum value is:%d\n",a);
        }
        else
        {
            printf("The minimum value is:%d\n",c);
        }
    }
    else
    if(b<c)
    {
        printf("The minimum value is:%d\n",b);
    }
    else
    {
        printf("The minimum value is:%d\n",c);
    }
    
    return 0;
}