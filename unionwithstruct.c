#include<stdio.h>
struct student
{
char  name[20];
int regno;
};
   
main()
{
	struct student s1={"abc",1};
	printf("d\n",s1.regno);
	printf("%s\n",s1.name);
	printf("%d",sizeof(s1));
	
}
