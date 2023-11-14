#include<stdio.h>
main()
{
	int i,j;
	int a[2][2]={{2,3},{3,4}};
	int a1[2][2]={2,3,4,5};
	int a2[2][2]={1,2,3,};
	int a4[2][2]={0};
	int a5[][2]={1,2,3};
	
	for (i=0;i<2;i++) // for rows
	{
		
		for(j=0;j<2;j++) //for column
		{
			printf("%d ", a4[i][j]);
			
			
		}
			printf("\n");
			
	}
	
	
}
