#include<stdio.h>
int main()
{
	int t,a[100],i,l,sl;
	printf("Enter number of integers:");
	scanf("%d",&t);
	printf("Enter numbers:");
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	sl=a[0];
	for(i=0;i<t;i++)
	{
		if(l<a[i])
		{
			sl=l;
			l=a[i];
		}
		if(a[i]>sl && a[i]<l)
		{
			sl=a[i];
		}
	}
	printf("Second largest:%d",sl);
}
