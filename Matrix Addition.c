#include <stdio.h>

int main()
{
	int a, b;
	int matrix1[10][10], matrix2[10][10];
	
	printf("Enter the number of rows and columns of your matrix: ");
	scanf("%d %d",&a ,&b);
	
	int i,j;
	
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("\nEnter the value of row %d column %d of matrix 1: ",(i+1) ,(j+1));
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("\nEnter the value of row %d column %d of matrix 2: ",(i+1) ,(j+1));
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	int matrix3[10][10];
	
	printf("\nThe sum: ");
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("\nRow %d column %d = %d",(i+1) ,(j+1), matrix3[i][j]);
		}
	}
	
	return 0;
}
