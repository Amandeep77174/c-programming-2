#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char str1[20]="HELLO";// output- 1 
	char str2[20]="hELLO";// output--1
	
	int i;
	i=strcmp(str1,str2);
	
	printf("%d", i);
	
}

