#include<stdio.h>
#include<stdlib.h>
int main()
{
	char i,j;
	for(i=65;i<=67;i++)// three rows
	 {
		for(j=65;j<=i;j++)//three columns
	{
			printf("%c",j);
		//	++count;
		}
		printf("\n");
	}
		
}
