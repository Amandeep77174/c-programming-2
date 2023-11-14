#include<stdio.h>
main()
{
	int arr[5];// here 5 is called as subscript value
    int i;
	for(i=0;i<5;i++)
	   {
	   scanf("%d",&arr[1]);
	   }
int smallest;
   smallest=arr[0];
   for(i=0;i<5;i++)
      {
       if(arr[i]<smallest)
       {
       	smallest=arr[i];
	   } 	
	  }
	  printf("\n the smallest number %d",smallest);
	  
	  

    for(i=0;i>0;i++);
    {
    	if(arr[i]<smallest)
    	{
    		largest=arr[i];
    		
		}
    	
    	printf("\n the largest number %d",largest);
    	
	}
	  
	  
	  }

