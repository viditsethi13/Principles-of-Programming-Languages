#include<stdio.h>
int main()
{
	int n,a=0,b=1,b1;
	printf("Enter number of element of series:");
	scanf("%d",&n);
	if(n==1)
		printf("%d",a);
	else if(n==2)
		printf("%d %d ",a,b);
	else
	{
		printf("%d %d ",a,b);
		for(int i=0;i<n-2;i++)
		{
			b1=b;
			b=a+b;
			a=b1;
			printf("%d ",b);
		}
	}	
}
