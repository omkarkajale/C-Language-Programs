#include<stdio.h>
#include<conio.h>
int main()
{
//clrscr();
int max=0,nmax=0,i,A[10]={9,44,56,92,23,21,24,54,3,2};
for(i=0;i<=10;i++)
{
if(A[i]>max)
{	
nmax=max;
max=A[i];
}

else if(A[i]>nmax&&A[i]<max){
nmax = A[i];
}
}
printf("print first largest element   = %d\n",max);
printf("print second largest element = %d",nmax);
//getch();

}
