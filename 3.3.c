#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,r1,r2;
	printf("Enter values of a,b,c of quadratic equation:");
	scanf("%d%d%d",&a,&b,&c);
	r1=(-b+sqrt((b*b)-4*a*c))/(2*a);
	r2=(-b-sqrt((b*b)-4*a*c))/(2*a);
	printf("roots of eqations are:%d %d",r1,r2);
}
