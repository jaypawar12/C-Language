#include <stdio.h>

int main()
{
    int number1;
    printf("Enter the value:");
    scanf("%d",&number1);
    
    if(number1<0)
    {
        printf("The negative number is:%d\n",number1);
    }
    else if(number1==0)
    {
      printf("The netural  number is:%d\n",number1); 
    }
    else
    if(number1>0)
    {
        printf("The positive number is:%d\n",number1);
    }
    
    return 0;
}