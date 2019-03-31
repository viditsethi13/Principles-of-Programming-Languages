#include<stdio.h>
#include<string.h>
void reverse(char* s)
{
	int i,a=0;
	char ch;
	char* st;
	char*e;
	st=s;
	e=s;
	a=strlen(s);
	for(i=0;i<a-1;i++)
	{
		e++;
	}
	for(i=0;i<a/2;i++)
	{
		ch=*st;
		*st=*e;
		*e=ch;
		st++;
		e--;
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
