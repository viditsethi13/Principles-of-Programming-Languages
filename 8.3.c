#include<stdio.h>
#include<string.h>
#define SIZE 20
struct bookdetail
{
  char name[20];
  char author[20];
  int bookid;
  float price;
};
void output(struct bookdetail v[],int n)
{
  int i,t=1;
  for(i=0;i<n;i++,t++)
  {
    printf("\n");
    printf("Book No.%d\n",t);
    printf("\t\tBook %d Name is=%s \n",t,v[i].name);
    printf("\t\tBook %d Author is=%s \n",t,v[i].author);
    printf("\t\tBook %d ID is=%d \n",t,v[i].bookid);
    printf("\t\tBook %d Price is=%f \n",t,v[i].price);
    printf("\n");
  }
}
int main()
{
  struct bookdetail b[SIZE];
  int n,i;
  printf("Enter the Numbers of Books:");
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;i++)
  {
       printf("\t=:Book %d Detail:=\n",i+1);
       printf("\nEnter the Book Name:\n");
       scanf("%s",b[i].name);
       printf("Enter the Author of Book:\n");
       scanf("%s",b[i].author);
       printf("Enter the ID of Book:\n");
       scanf("%d",&b[i].bookid);
       printf("Enter the Price of Book:\n");
       scanf("%f",&b[i].price);
  }
  output(b,n);
}
