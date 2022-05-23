#include <stdio.h>
//This program was written and debugged by Moses Okoth

int main()
{
	int no1, no2, no3;
	int i, repeat;
	
	no1 = 0;
	no2 = 1;
	
	int counter;
	
do{
	printf("\nEnter the number of characters you want your fibonacci series to have: ");
	scanf("%d",&counter);
	
	if(counter==2)
	{
		printf("\nThe series = 0, 1");
		printf("\nEnter 1 to rerun the program: ");
		scanf("%d",&repeat);
	}
	
	else if(counter>2)
	{
		printf("\nThe series = 0, 1");
		for(i=0; i<counter; i++)
		{
		no3 = no1 + no2;
		printf(", %d", no3);
		
		no1 = no2;
		no2 = no3;
		}
		printf("\nEnter 1 to rerun the program: ");
		scanf("%d", &repeat);
	}
	
	else{
		printf("\nThe system cannot generate the specified number by the user. \nEnter 1 to re-enter your values: ");
		scanf("%d",&repeat);
	}
} while(repeat==1);
	
	return 0;
}
