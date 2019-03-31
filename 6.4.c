#include<stdio.h>
#include<string.h>
void reverse(char s[])
{
	int i,a=0;
	char ch;
	while(s[a]!='\0')
	{
		a++;
	}
	for(i=0;i<a/2;i++)
	{
		ch=s[i];
		s[i]=s[a-i-1];
		s[a-i-1]=ch;
	}
	puts(s);
}
int main()
{
	char s[100];
	printf("Enter String:");
	gets(s);
	reverse(s);
}
