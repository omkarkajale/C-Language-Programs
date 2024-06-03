#include<stdio.h>
 int main()
{
int x,y;
x=10;
int *ptr;
ptr = &x;
y=*ptr;
printf("%d\n",x);	
printf("%d\n",x,&x);	
printf("%d\n",*&x,&x);	
printf("%d\n",*ptr,ptr);
	printf("%d\n",ptr,&ptr);	
	printf("%d\n",y,&y);
	*ptr=25;	
	printf("%d\n",x);	
		
	 return 0;
}
	
	
	
	
	

