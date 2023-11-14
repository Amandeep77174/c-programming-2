#include<stdio.h>
main()
{
	int a[50];
	int i,key,loc=-1;
	printf("enter the elements\n");
	for (i=0;i<5;i++)
	{
	    scanf("%d",&a[i]);
	}
	key=3;
	for(i=0;i<5;i++)
    {
    	if(a[i]==key)
    	{
    	 loc=i;	
		}
    	if (loc!=-1)//means found
		 { 
		printf("element is found at location %d",loc+1);
		
		 }
		else
		{
			printf("element not found");
			
			  }  	
	}	
	
	
}
