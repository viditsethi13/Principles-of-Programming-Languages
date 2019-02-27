#include<stdio.h>
#define max 100
int main()
{
	int a[max][max],b[max][max],c[max][max],p[max][max],m,n,i,j;
	printf("Enter dimension of matrixes:");
	scanf("%d%d",&n,&m);
	printf("Enter first matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of 2 matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	printf("Product of 2 matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
}
