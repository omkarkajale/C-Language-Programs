#include<stdio.h>
#include<conio.h>
void disp(void);

int A[10]={0,1,2,3,4,5,6,7,8,9};
void main()
{
clrscr();
disp();
getch();
}
void disp(void)
{
int i;
for(i=0;i<=9;i++)

{
printf("%d",A[i]);
}
getch();




}