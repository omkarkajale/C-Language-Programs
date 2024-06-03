#include<stdio.h>
#include<stdlib.h>
int main(){
	char i,j,count='A';
	for(i='A';i<='E';i++)//rows
	{
		
		for(j='A';j<=i;j++)//columns
		{
			printf("%c",count);
			++count;
		}
		printf("\n");
	}
	
	
	
}
