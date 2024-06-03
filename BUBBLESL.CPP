#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,y,a[5]={2,-1,-10,55,67};
    //clrscr();
      for(i=0;i<=5;i=i+1)
      {
	 for(j=0;j<=5;j=j+1)
	 {
	 if(a[j]>a[j+1])
	 {
	 y=a[j];
	 a[j]=a[j+1];
	 a[j+1]=y;
	 }
	   }
	      }
	      for(i=0;i<=5;i=i+1)
	      {
	      printf("%d\n",a[i]);
	      }
	      getch();
	      }
