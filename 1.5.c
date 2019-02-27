#include<stdio.h>
int main()
{
	int x,y,s1,s2;
	printf("Enter x and y:");
	scanf("%d%d",&x,&y);
	s1=(x+y)/(x-y);
	s2=x*x-y*y;
	printf("%d %d",s1,s2);
	return 0;
}
