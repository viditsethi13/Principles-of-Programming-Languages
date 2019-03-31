#include <stdio.h>
int main()
{
    char x[100],y[100];

    printf("Enter the first string:");
    gets(x);
    printf("Enter the second string:");
    gets(y);
    char *a = x;
    char *b = y;

    while(*a)
    {
        a++;
    }
    while(*b)
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';
    printf("\nThe string after concatenation is:%s",x);
}
