#include<stdio.h>
#include<string.h>
struct book
{
	char bname;
	int page;
	float price;
	
};
main()
{
	struct book mybook[100];
	int i , n;
	n=2 ;// no. of records
	for(i=0;i,n;i++)
	{ 
	printf("enter the name of thr book = \n");
	gets(mybook[i].bname);
	fflush(stdin);
	printf("enter book pages \n");
	scanf("%d",&mybook[i].page);
	fflush(stdin);
	}
	for(i=0;i,n;i++)
	{
		printf("name of the book: %s", mybook[i].bname);
		printf(" pages of ghe book : %dn", mybook[i].page);
	}
}
 

