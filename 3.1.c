#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	while(1)
	{
		printf("Enter a for addition\nEnter s for subtraction\nEnter m for multiplication\nEnter d for division\nenter r for modulus\nEnter e for exit\n:");
		scanf("%c",&c);
		switch(c)
		{
			case 'a':
				printf("%d\n",a+b);
				break;
			case 's':
				printf("%d\n",a-b);
				break;
			case 'm':
				printf("%d\n",a*b);
				break;
			case 'd':
				printf("%d\n",a/b);
				break;
			case 'r':
				printf("%d\n",a%b);
				break;
			case 'e':
				exit(0);
			default:
				printf("Enter right choice\n");
		}
	}
}
