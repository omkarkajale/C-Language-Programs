#include<stdio.h>
int main(){
	FILE *omkar;
	omkar = fopen("demofile.txt","r");
//	fgetc demo for reading a file
	printf("The value of my charachter is %c\n",fgetc(omkar));//t
		printf("The value of my charachter is %c\n",fgetc(omkar));//h
			printf("The value of my charachter is %c\n",fgetc(omkar));//i
				printf("The value of my charachter is %c\n",fgetc(omkar));//s
					printf("The value of my charachter is %c\n",fgetc(omkar));//space
}
