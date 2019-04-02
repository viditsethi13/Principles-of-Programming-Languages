#include<stdio.h>
union emp
{
	char name[100];
	char home_a[100];
	char hostel_a[100];
	char city[100];
	char state[100];
	long int zip;
}e;
void input()
{
	printf("Enter Name:");
	scanf("%s",&e.name);
	printf("Enter Home_Add:");
	scanf("%s",&e.home_a);
	printf("Enter Hostel_Add:");
	scanf("%s",&e.hostel_a);
	printf("Enter City:");
	scanf("%s",&e.city);
	printf("Enter State:");
	scanf("%s",&e.state);
	printf("Enter Zip:");
	scanf("%d",e.zip);
}
void output()
{
	printf("\n\n%s",e.hostel_a);
}
int main()
{
	input();
	output();
}
