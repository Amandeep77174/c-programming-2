//bubble slot
#include<stdio.h>
main()
{
	int a[100];
	int  hold, i,j;
	int n=5;
	printf("enter the elements of array");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		
	}

   printf(" \n the element entered are");
   for(i=0; i<n;i++);
   { 
   printf(" %d ",a[i]);
   }
   for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-i-1;j++) // loop tto control the no. of passes

    {
    	if (a[j]> a[j+1]) //this loop is for comparison
    	       {
    	       	
    	       	hold=a[j];
    	       	a[j]=a[j+1];
    	       	a[j+1]=hold;
    	       	
			   }
			} 
			printf(" \n display the array element after bubble sort \n");
			for(i=0;i<n;i++)
			{
			printf(" %d ",a[i]);
				   }   	
	}
}

