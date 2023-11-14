#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float fee;
}s5;
main()
{
	int a;
	struct student s1,s2;
struct student	s3={"deepanshu",6,5000};
s5.fee=9000;	
	
	
	printf(" the student details are; %s \n %d \n %f",s3.name,s3.rollno,s3.fee);
}

