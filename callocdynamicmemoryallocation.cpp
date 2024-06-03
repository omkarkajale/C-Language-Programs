#include<stdio.h>
#include<stdlib.h>
int main(){
	int *omkar;
	omkar = (int*)calloc(6,sizeof(int));
/*		for( int y=0;y<6;y++){
	printf("Enter the value of %d element :",y);
		scanf("%d",&omkar[y]);
	}*/
	for(int y=0;y<6;y++){//it return default value zero 
		printf("The value of %d element is : %d \n",y,omkar[y]);
}	}

