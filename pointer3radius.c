#include<stdio.h>
main()
{
	double radius, area=0;
	double *pradius=& radius, *parea=&area;
	*pradius=10;
	
	*parea=3.14*(*pradius) * (*pradius);
	
	
	
	//area= 3.14* radius*  rsdius;
	printf("%.2lf \n  %.2lf", *pradius, *parea );//.2 is used to get only two values after decimal
}
