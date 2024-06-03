#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int A[3][3]={0},B[3][3]={0},C[3][3]={0};

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&A[i][j]);
}
for(i=0;i<=2;i++)
 {
for(j=0;j<=2;j++)
   {
   C[i][j]=A[i][j]+C[i][j]
   }
   }
   for(i=0;i<=2;i++)
   {
