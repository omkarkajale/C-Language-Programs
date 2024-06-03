#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{

int i,n=5;
n=fact(n);
printf("%d",n);
getch();
}
int fact(int g)
{
if(g==1)
return 1;
else
return g*fact(g-1);
}
