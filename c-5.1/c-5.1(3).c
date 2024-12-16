#include <stdio.h>

int main()
{
    float subject1,subject2,subject3,avarage ;
    
    printf("Enter the subject1 mark:");
    scanf("%f",&subject1);
    printf("Enter the subject2 mark:");
    scanf("%f",&subject2);
    printf("Enter the subject3 mark:");
    scanf("%f",&subject3);
    
    avarage =(subject1+subject2+subject3)/3;
    
    printf("The avarage mark is:%f\n",avarage);
    return 0;
}