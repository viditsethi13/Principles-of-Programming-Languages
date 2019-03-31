#include<stdio.h>
void transpose_matrix(int[][10],int,int);
int main()
{
	int a[10][10],r, c, i, j;
	printf("Enter rows and column of matrix: ");
	scanf("%d %d", &r, &c);
	printf("\nEnter elements of matrix:\n");
	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
    		printf("Enter elements a%d%d: ",i+1,j+1);
    		scanf("%d",&a[i][j]);
		}
	}
	printf("\nEntered Matrix: \n");
	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
    		printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	transpose(a,r,c);
}
void transpose(int a[][10], int r, int c)
{
	int  trans[10][10],i,j;
	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
   			trans[j][i]=a[i][j];
		}
	}
	printf("\nTranspose of Matrix:\n");
	for(i=0; i<c; ++i)
	{
		for(j=0; j<r; ++j)
		{
    		printf("%d  ",trans[i][j]);
		}
		printf("\n");
	}
}
