#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i,j,x=-1;
	printf("Enter String:");
	scanf("%s",&s1);
	j=strlen(s1);
	for(i=0;i<j;i++)
	{
		if(s1[j-i-1]!=s1[i])
			x++;
	}
	if(x<0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a Palindrome");
	}
}
