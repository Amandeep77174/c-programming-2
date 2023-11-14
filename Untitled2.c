#include<stdio.h>
main()
{
	int var=7;
	int * ptr2;
	int **ptr1;
	ptr2=&var;
	ptr1=&ptr2;
	printf("value of var =%d \n",var);
	printf("value of var using pointer= %d \n", *ptr2);
	
	
	printf("value of var using double pointer = %d \n",**ptr1);
	printf(" own address of var = %d \n", &var);
	printf(" own address of ptr2 = %d \n",&ptr2);
	printf(" own address of ptr1 = %d \n",&ptr1);
	
	printf(" Address of val held by ptr2 = %d \n",&ptr2);
	printf(" Address of val held by ptr1 = %d \n",&ptr1);
	printf("expp = %d \n", *ptr);
	
	
	
	
	
}
