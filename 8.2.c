#include<stdio.h>
struct emp
{
	char name[100];
	int bs;
}e[3];
void input()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter Name:");
		scanf("%s",&e[i].name);
		printf("Enter Basic Salary:");
		scanf("%d",&e[i].bs);
	}
}
void output()
{
	int i;
	for(i=0;i<3;i++)
	{
		float gs;
		gs=e[i].bs+(0.52*e[i].bs);
		printf("\n\nName:%s",e[i].name);
		printf("\nGross Salary:%f",gs);
	}
}
int main()
{
	input();
	output();
}
