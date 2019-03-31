#include <stdio.h> 
int length(char* s) 
{ 
    int len=0;
    while (*s != '\0') 
	{ 
        len++; 
        s++; 
    } 
    return len; 
} 
int main() 
{ 
    char a[100];
    printf("Enter String:");
    gets(a);
    printf("Length of String:%d",length(a));
} 
