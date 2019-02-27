#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,result;
	printf("Enter 7 numbers:");
	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
	result=((a+b/c*d-e)*(f-g));
	printf("Result is %d",result);
	return 0;
}
