#include<stdio.h>
int main(){
	int seen[10] = {0};//DIGITS BETWEEN 1-10 BCZ THEIR 10 DIGITS ARE POSSIBLE 0-9
	int N;
	printf("Enter the number :");
	scanf("%d",&N);
	int remainder;
	while(N>0)//THE N IS VALUE INPUT BY USERS(0 MEANS THE DIGIT IS NOT SEEN`)
	{
		remainder = N%10;// WE SAVE REMAINDER INSIDE REMAINDER VARIABLE
		if(seen[remainder] ==1)//REMAINDER IS EQUAL TO 1 OR NOT
		break;
		seen[remainder] = 1; //REPLACE THE VALUE OF REMAINDER BY 1(1 MEANS THE DIGIT IS SEEN)
		N = N/10; //WE CHECK QUOTIENT HERE EXAMPLE 23/10=2
	}
	if(N>0)
	printf("Yes");
	else
	printf("No");
	return 0;
	}

