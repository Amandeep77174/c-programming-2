#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int a=123;
	char str[20];
	itoa(a,str,2);
	printf("Binary value is %s",str);
	
}
