#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	char* s1;
	char*s2;
	int x=1,l1,l2;
	printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    s1=a;
    s2=b;
    l1=strlen(a);
    l2=strlen(b);
    if(l1==l2)
    {
		while(*s1!='\0')
	    {
	    	if(*s1!=*s2)
	    	{
	    		x=0;
	    		break;
			}
			s1++;
			s2++;
		}
	}
	else
	{
		x=0;
	}
	if(x==1)
	{
		printf("Same");
	}
	else
	{
		printf("Not Same");
	}
}
