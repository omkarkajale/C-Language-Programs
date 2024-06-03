#include<stdio.h>
#include<string.h>

struct student{
	 char name[20];
	int id;
}  a[5];


int fun(int);

main()
{
	int i;
	for(i=0;i<=2;i++)
	{
		printf("Enter any name:");
		scanf("%s", &a[i].name);
	a[i].id=fun(i);
	}
	for(i=0;i<=2;i++)
	{
	    printf(" %s ",a[i].name);
	     printf(" %d ",a[i].id);
	}
}
	int fun(int i)
	{
	    int j,sum=0;
	    for(j=0;j<strlen(a[i].name);j++)
	    {
	        sum=sum+a[i].name[j];
	    }
	    printf("%d",sum);
	    return(sum%23);
	}
