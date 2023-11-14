#include<stdio.h>
struct result
{
	float marks;
	
};
struct student
{

	int regno;
    struct result r1;// nesting
};
main()
{
	struct student s1;
	s1.regno=1221144
	s1.r1.marks=90;
	printf("d\n",s1.regno);
	printf("%f\n",s1.r1.marks);
}
	 
}
