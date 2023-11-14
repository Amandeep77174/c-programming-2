#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char str1[20]="HELLO ALL"; 
	int i;
	//i =strlen(str1);//LENGTH OF STRING
	//strrev(str1);//reverse the string
	//strlwr(str1);// convert in small letter
	strupr(str1);// convrt small letters into capital
	printf("%s",str1);

}
