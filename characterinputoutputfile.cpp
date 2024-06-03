#include<stdio.h>
int main(){
	FILE *omkar;
	omkar = fopen("demofile.txt","r");
	char c = fgetc(omkar);
	printf("The value of my charachter is %c\n",c);
}
