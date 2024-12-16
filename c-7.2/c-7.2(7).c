#include <stdio.h>

int main()
{
	int j,i,k;

	for(i=1; i<=5; i++)
	{
		k=1;
		for(j=1; j<=10; j++)
		{

			if(j<=6-i || j>=5+i)
			{
				printf("%d", k);
				if(j<5)
				{
				    k++;
				}
				else if(j>5)
				{
				    k--;
				}
			}
			else
			{

				printf(" ");
				if(j==6)
				{
				    k--;
				}
			}

		}
		printf("\n");
	}

	return 0;
}