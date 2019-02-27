#include<stdio.h>
int main()
{
	int cp,sp,p,l;
	float pl,pp;
	printf("Enter CP and SP:");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		p=sp-cp;
		pl=p*100;
		pp=pl/cp;
		printf("Profit Percentage %f ",pp);
	}
	else if(cp>sp)
	{
		l=cp-sp;
		pl=l*100;
		pp=pl/cp;
		printf("Loss Percentage %f ",pp);
	}
	else
	{
		printf("no Profit no Loss");
	}
	return 0;
}
