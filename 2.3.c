#include<stdio.h>
int main()
{
	int n,x,i,j;
	printf("Enter last number of series:");
	scanf("%d",&n);
	if(n==2)
	{
		printf("%d",n);
	}
	else if(n<5)
	{
		printf("2 3");
	}
	else
	{
		printf("2 3 ");
		for(i=5;i<=n;i++)
		{
			if(i%2==0)
			{
				x=1;
			}
			else
			{
				for(j=3;j<i/2;j++)
				{
					if(i%j==0)
					{
						x=1;
						break;
					}
				}
			}
			if(x<1)
				{
					printf("%d ",i);
				}
				x=0;
		}
	}
}
