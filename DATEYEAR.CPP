#include<stdio.h>
#include<conio.h>
typedef struct date{
int month,date,year;
}date;

void display(date d){
printf("The date is :%d/%d/%d\n",d.date,d.month,d.year);

}
int datecmp(date d1,date d2){
if(d1.year>d2.year){
return 1;
}        else{
return 0;
}
}
void main()
{
clrscr();
   date d1={1,3,4};
   date d2={2,22,21};
   display(d1);
   display(d2);
 datecmp();
  // printf("%d")
   getch();
		  }