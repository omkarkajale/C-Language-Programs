#include<stdio.h>
int addnum(int a,int b);
int main()
{
	int n1,n2,sum;
	printf("enter two no:");
	scanf("%d",&n1,&n2);
	sum = addnum(n1,n2);
	printf("sum=%d",sum)
}
