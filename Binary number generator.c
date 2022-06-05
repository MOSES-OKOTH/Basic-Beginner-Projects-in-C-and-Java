#include <stdio.h>
#include <math.h>

int main()
{
	int number, i, binary[10];
	
	do{
		printf("\nEnter any value to calculate its binary equivalent: ");
		scanf("%d",&number);
	
		for(i=0;number>0;i++)
		{
			binary[i]=number%2;
			number = number/2;
		}
	
		for(i=i-1;i>=0;i--)
		{
			printf("%d",binary[i]);
		}
	} while(number!=0);
	return 0;
}
