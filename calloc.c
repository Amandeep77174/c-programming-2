#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p , n, i;
	n =5; // the int type values you want use
	p=(int *) calloc(n,sizeof(int));
    if(p==NULL)
	{
		print("not sufficient memory");
		exit(1);
	}	
	  else
	{
		printf("enter values to be done by DMA \n");
		
		for (i=0;i<n;i++)
		{
			scanf("%d",p+i);
			 
		}
	for (i=0;i<n;i++)
		{
			scanf("%d",*(p+i));
			 
		}
	}
	
	
}
