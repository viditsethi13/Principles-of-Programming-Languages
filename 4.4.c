#include<stdio.h>
int main()
{
	int a[100],b[100],c[200],i,j,m,n,k;
	printf("Enter number of elements of 1st Array:");
	scanf("%d",&m);
	printf("Enter elements of 1st Array:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number of elements of 2nd Array:");
	scanf("%d",&n);
	printf("Enter elements of 2nd Array:");
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	i=0;
	j=0;
	k=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	if(j>=n)
	{
		while(i<m)
		{	
			c[k]=a[i];
			i++;
			k++;
		}
	}
	if(i>=m)
	{
		while(j<n)
		{	
			c[k]=b[j];
			j++;
			k++;
		}
	}
	printf("\n\nMerged Array:");
	for(i=0;i<m+n;i++)
	{
		printf(" %d ",c[i]);
	}
}
