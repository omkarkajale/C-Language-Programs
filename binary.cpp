#include<stdio.h>
int main()
{
 
int v,c;
scanf("%d",&v);
while(v!=0)
{ 
c=v/2;
if((c %2)==0)

 printf("0");
 else
 printf("1");
 v=c;
}
return 0;
}
