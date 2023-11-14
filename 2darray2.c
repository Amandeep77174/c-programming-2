#include<stdio.h>
main()
{
	int i,j;
	int a[2][2]={{2,3},{3,4}};
	int b[2][2];
	int c[2][2];                         
 	for (i=0;i<2;i++) // for rows
	{
		
		for(j=0;j<2;j++) //for column
		{
			scanf(" %d ", &b[i][j]);
			
			
		}
			
			
	}
	
	for (i=0;i<2;i++) // for addition of two matrices
	{
		
		for(j=0;j<2;j++) //for column
		{
			c[i][j]=a[i][j]+b[i][j];
			
			
		}
}
    printf("sum of two matrices is as follow as");
    
	for (i=0;i<2;i++) 
	{
		
		for(j=0;j<2;j++) 
		
		{ printf("%d",c[i][j]);
		
			printf("\n");
		}
	}
