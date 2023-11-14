#include<stdio.h>
main()
{
	int a[5]={1,2,4,5,8};
	int N=5; // no. of elements
	int i=0; //to be used with loop
	int index=3; //place to insert data
	int value=9; //to be inserted
	printf(" show the element of the array");
	for (i=0;i<N;i++)
	{
		printf(" %d ",a[i]);
		
	}
	//for(i=N; i>3;i--)// means we start with large no.
	for(i=index; i<N;i++)
	{
	//	a[i+1]=a[i];// used to shift element to right
		a[i]=a[i+1];
		
	 } 
	a[index]=value;
	//N++;// or if we want to delete any element we can use N--;
  N--;
		printf(" show the element of the array");
	for (i=0;i<N;i++)
	{
		printf(" %d ",a[i]);
		
	}
	
	
}
