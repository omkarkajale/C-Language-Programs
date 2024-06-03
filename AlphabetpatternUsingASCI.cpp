#include<stdio.h>
#include<stdlib.h>
int main(){
	char i,j,count='A';
	for(i=65;i<=69;i++)//rows
	{
		
		for(j=65;j<=i;j++)//columns
		{
			printf("%c",count);
			++count;
		}
		printf("\n");
	}
	
	
	
}
