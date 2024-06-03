#include<stdio.h>
int main(){
	FILE *ptr;
			ptr =fopen("fputcdemofile.txt","w");
				putc('c',ptr);
					putc('h',ptr);
						putc('c',ptr);
}
