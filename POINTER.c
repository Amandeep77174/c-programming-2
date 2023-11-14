#include<stdio.h>
main()
{
	int var1=10, var2=9;
	int *const ptr =&var1;
	ptr=&var2;
	printf(" %d \n",*ptr);
	printf(" %d \n",ptr);
}
