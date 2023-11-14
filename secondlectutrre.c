//address
#include<stdio.h>
main()
{

int a[5]={9,4,3,6,7};
 
printf("first : %u",a);
printf("\n address of index : %u",&a[0]);
printf("\n address of array: %u",&a[2]);
printf("\n address of array: %u",&a[7]);

printf("\n size of array a= %d",sizeof(a));
}
