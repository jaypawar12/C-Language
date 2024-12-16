#include <stdio.h>

int main()
{
    float x,y,result;
    printf("x= ");
    scanf("%f",&x);
    
    printf("y= ");
    scanf("%f",&y);
     
    result=(x+y)*(x+y);
     
    printf("result= (x + y )^2 %f",result);

    return 0;
}