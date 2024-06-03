#include<stdio.h>
#include<stdlib.h>
int main(){
	int *omkar;
	int n;
	printf("how many int you want \n");
	scanf("%d",&n);
	omkar = (int*)calloc(n,sizeof(int));
		for( int y=0;y<n;y++){
	printf("Enter the value of %d element :",y);
		scanf("%d",&omkar[y]);
	}
	for(int y=0;y<n;y++){//it return default value zero 
	
		printf("The value of %d element is : %d \n",y,omkar[y]);
}	}

