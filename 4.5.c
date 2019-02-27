#include<stdio.h>
int main()
{
	int n,a[100],i,s,x=0;
	printf("Enter number of integers:");
	scanf("%d",&n);
	printf("Enter numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number to check:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(s==a[i])
		{
			x++;
		}
	}
	printf("Frequency:%d",x);
}
