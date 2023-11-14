#include<stdio.h>
#include<string.h>
struct book
{
	char bname;
	int page;
	
	
};
main()
{
	struct book mybook={ "abc",20};
	struct book *bptr;
	bptr=&mybook;
	printf("book name : %s and book pages %d \n", mybook.bname,mybook.page);
	
	printf("book name : %s and book pages %d \n", bptr->bname,bptr->page);
	printf("book name : %s and book pages %d \n", (*bptr).bname,(*bptr).page);
	
}
	
