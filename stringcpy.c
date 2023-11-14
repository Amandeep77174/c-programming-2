#include<stdio.h>
#include<string.h>


main()
{
	char s1[20]="my uni is";
	char s2[20]={"LPU"};
	//strcpy(s1,s2);
	//strncpy(s1,s2,2);
	strncat(s1,s2,2);
	
	printf("%s",s1);
	
	
	}
	
	
