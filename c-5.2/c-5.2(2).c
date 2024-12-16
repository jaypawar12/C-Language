#include <stdio.h>

int main()
{
	int a,b,c,d;
	printf("A=");
	scanf("%d",&a);
	printf("B=");
	scanf("%d",&b);
	printf("C=");
	scanf("%d",&c);
	printf("D=");
	scanf("%d",&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("The maximum value is:%d\n",a);
			}
			else
			{
				printf("The  maximum value is:%d\n",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("The maximum value is:%d\n",c);
			}
			else
			{
				printf("The maximum value is:%d\n",d);
			}
		}
	}
	else 
	{
	if(b>c)
	{
		if(b>d)
		{
			printf("The  maximum value is:%d\n",b);
		}
		else
		{
			printf("The  maximum value is:%d\n",d);
		}
	}
	else
	{
	    if(c>d)
	    {
				printf("The maximum value is:%d\n",c);
			}
			else
			{
				printf("The maximum value is:%d\n",d);
			}
		}
    }

	return 0;
	
}