#include<stdio.h>
#include<string.h>
struct student
{ 
    
	char name[20];
    int regno;
    float marks[4];
    
}
main()
{
	struct student s1={"aman",1,{96.4,93.2,94.2,95.3,87.5} };
	printf("name of the person = %s \n",s1.name);
	printf("\n reg no = %d \n ",s1.regno);
	printf("%f\n",s1.marks[0] );
	printf("%f\n",s1.marks[1] );
}
