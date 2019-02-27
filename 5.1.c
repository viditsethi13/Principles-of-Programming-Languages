#include<stdio.h>
int main()
{
	char a[max],s[max],c;
	int n,ch;
	printf("Enter string:");
	scanf("%s",&a);
	while(1)
	{
		printf("Press 1 for adding a string\nPress 2 for deleting a character\nPress 3 for exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter sub string:");
				scanf("%s",&s);
				printf("Enter position:");
				scanf("%d",&p);
				break;
			case 2:
				printf("Enter position for deletion:");
				scanf("%d",&p);
				
				break;
			case 3:
				exit(0);
				break;
		}
	}
}
