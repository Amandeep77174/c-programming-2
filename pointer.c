#include<stdio.h>
main()
{
	int a;
	int *ptr;
	a=7;
	ptr=&a;
	printf("a is %d",a);
	printf(" \naddress of a is %u",&a);
	printf(" \naddress of a is %u",ptr);
	printf(" \nvalue of a through ptr is %d",*ptr);// this is called as drefrencing(the value which is kept by me in initially)
    printf(" \naddress of  pointer ptr  is %u",&ptr);
}
