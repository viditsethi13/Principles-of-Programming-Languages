#include<stdio.h>
int add(int x, int y)
{
    int a, b;
    do {
        a = x & y;
        b = x ^ y;
        x = a << 1;
        y = b;
    } while (a);
    return b;
}
int main()
{
	int a,b;
	printf("Enter numbers for addition:");
	scanf("%d%d",&a,&b);
    printf( "%d+%d=%d",a,b,add(a,b));
    return 0;
}
