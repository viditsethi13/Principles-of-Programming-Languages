#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	while(1)
	{
		printf("Enter + for addition\nEnter - for subtraction\nEnter * for multiplication\nEnter / for division\nenter % for modulus\nEnter e for exit\n:");
		scanf("%c",&c);
		switch(c)
		{
			case '+':
				printf("%d\n",a+b);
				break;
			case '-':
				printf("%d\n",a-b);
				break;
			case '*':
				printf("%d\n",a*b);
				break;
			case '/':
				printf("%d\n",a/b);
				break;
			case '%':
				printf("%d\n",a%b);
				break;
			case 'e':
				exit(0);
			default:
				printf("Enter right choice\n");
		}
	}
}
