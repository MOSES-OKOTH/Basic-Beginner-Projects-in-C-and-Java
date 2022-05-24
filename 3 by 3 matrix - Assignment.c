#include <stdio.h>
/*
This code was formulated, written and debugged by team Russia members.
Source control:
1. Unkown developer
2. Moses Okoth (Final Editor: debugging)
*/

int main()
{
	int matrix[3][3], i, j;
	
	for(i=0 ; i<3;i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\nEnter the values for row %d column %d: ", i+1 ,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\nYour matrix values are as follows: ");
	
	for(i=0 ; i<3;i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\nRow %d column %d = %d", i+1 ,j+1, matrix[i][j]);
		}
	}
	
	return 0;
}
