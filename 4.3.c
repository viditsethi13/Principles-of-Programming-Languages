#include<stdio.h>
int main()
{
	int t,a[100],i,p=0,n=0,e=0,o=0,c=0;
	printf("Enter number of integers:");
	scanf("%d",&t);
	printf("Enter numbers:");
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
		c++;
		if(a[i]>0)
			p++;
		else
			n++;
		if(a[i]%2==0)
			e++;
		else
			o++;
	}
	printf("Count:%d \nPositive:%d \nNegative:%d \nEven:%d \nOdd:%d",c,p,n,e,o);
	
}
