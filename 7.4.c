#include<stdio.h>
#include<string.h>
int main() 
{ 
    char a[100],b[100];
    printf("Enter String:");
    gets(a);
    char *s1,*s2;
    s1=a;
    s2=b;
    while(*s1!='\0')
    {
    	*s2=*s1;
    	s2++;
    	s1++;
	}
	printf("Copied String:%s",b);
}
