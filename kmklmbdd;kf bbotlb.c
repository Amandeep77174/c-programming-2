#include<stdio.h>
main()
{
	int a[11]={1,2,5,4,6,31,8,6,11,21};
	int i,j,k;//i is the total number of element
	j=0;
	int N=11;
	int index=3;
	int value=4;
	printf("\n printing the elements of the array before insertion \n");
		for(i=0;i<N;i++)
		{
			printf("%d",a[i]);
		}
	for(i=index;i<N-1;i++)
	{
		a[i]=a[i+1];
		
	}
	a[index]=value;
	N--;
	printf("\n printing the elements of the array before insertion \n");
		for(i=0;i<N;i++)
		{
			printf("%d",a[i]);
		
	}
	
}
