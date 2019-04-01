#include <stdio.h>
int fac(int n)
{
	int i,fact=1;
	for(i=n;i>0;i--)
    {
    	fact=fact*i;
	}
	return fact;
}
int main()
{
	int n;
	printf("Enter integer:");
    scanf("%d", &n);
	printf("Factorial of the number is:%d",fac(n));
}
