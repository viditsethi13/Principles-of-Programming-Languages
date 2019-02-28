#include<stdio.h>
int main()
{
	int n,sum=0,m;
	printf("Enter 3 digit number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		sum=pow(n%10,3)+sum;
		n=n/10;
	}
	sum==m?printf("The number is Armstrong number"):printf("Not a Armstrong number");
}
