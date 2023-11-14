#include<stdio.h>
struct student
{
int regno;
   struct result
   {
   float marks;
   
   
   }r1;
   
};
   
main()
{
	struct student s1;
	s1.regno=1221144;
	s1.r1.marks=90;
	printf("d\n",s1.regno);
	printf("%f\n",s1.r1.marks);
}
