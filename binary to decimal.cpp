#include<stdio.h>
#include<stdlib.h>
int main()
{ int binary,decimal = 0,base = 1,num,rem;
	printf("enter the binary number:");
	scanf("%d",&binary);

num = binary
	while(binary != 0)
	{
		rem = binary %10;
		decimal = decimal +rem*base;
		binary = binary / 10;
		base= base*2;
			}
	printf("decimal equivalent of the binary number %d is : %d",num,decimal);
return 0;	
}
