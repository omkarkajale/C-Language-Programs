#include<stdio.h>
int main(){
	FILE *omkar;
	char c;
	omkar = fopen("getcdemo.txt","r");
	 c=fgetc(omkar);
	while(c!=EOF){
		printf("%c",c);
	c= fgetc(omkar);
	}
}
