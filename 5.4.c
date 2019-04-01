#include <stdio.h>
#include <string.h>
int main()
{
	char text[100],word[10],str[10][10];
	int i=0,j=0,k=0,w,p,x=0;
	printf("PLEASE WRITE ANY TEXT:");
	gets(text);
	printf("ENTER WHICH WORD IS TO BE COUNTED:");
	scanf("%s",word);
	p=strlen(text);
	for (k=0; k<p; k++)
	{
		if (text[k]!=' ')
		{
			str[i][j] = text[k];
			j++;
		}
		else
		{
			str[i][j]='\0';
			j=0; i++;
		}
	}
		str[i][j]='\0';
		w=i;
	for (i=0; i<=w; i++)
	{
		if(strcmp(str[i],word)==0)
			x++;
	}
	printf("Number of Occurance %d ",x);
}
