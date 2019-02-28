#include<stdio.h>
#include<math.h>
int fact(int n)
{
	int fac=1,i;
   for(i=1;i<=n;i++)
   {    
      fac=fac*i;    
   }
   return fac;
}
int main()
{
	int x;
	float sum;
	printf("Enter a number:");
	scanf("%d",&x);
	sum=1-(pow(x,2)/fact(2))+(pow(x,4)/fact(4))-(pow(x,6)/fact(6))+(pow(x,8)/fact(8))-(pow(x,10)/fact(10));
	printf("Sum %f",sum);
}

