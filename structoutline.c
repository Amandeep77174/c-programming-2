#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float fee;
}
main()
{
	int a;
	struct student s1,s2,s3;
	s1.rollno=12;
	s1.fee=30000;
	strcpy(s1.name,"Aman");
	strcpy(s2.name,"Aryan");
	s2.fee=8000;
	s2.rollno=30;
	s3=s1; //copy of one structure to another
	printf(" the student details are; %s \n %d \n %f",s2.name,s2.rollno,s2.fee);
}


