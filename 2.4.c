#include<stdio.h>
int main()
{
	char n;
	printf("Enter Character:");
	scanf("%c",&n);
	if(47<n && n<58)
	{
		printf("Digit");
	}
	else if(96<n && n<123)
	{
		printf("Small case letter");
	}
	else if(64<n && n<91)
	{
		printf("Capital letter");
	}
	else if(n<48 || 57<n && n<65 || 90<n && n<97 || 122<n && n<128 )
	{
		printf("Special Symbol");
	}
}
