#include <stdio.h>
int fact(int n)
{
	int fac;
	if(n==1)
	{
		return n;
	}
	else
	{
		fac=n*fact(n-1);
		return fac;
	}
}
int main()
{
	int n;
	printf("Enter integer:");
    scanf("%d", &n);
    printf("Factorial of the number is:%d",fact(n));
}
