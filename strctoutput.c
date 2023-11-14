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
	gets(s3.name);
	scanf("%f", &s3.fee);
	scanf("%d", &s3.rollno);
	printf(" the student details are; %s \n %d \n %f",s3.name,s3.rollno,s3.fee);
}

