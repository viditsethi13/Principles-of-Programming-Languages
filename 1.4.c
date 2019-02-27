#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter 3 digit number:");
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	printf("Sum of digits is %d",sum);
}
