#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
//clrscr();
int x,y;
start:
     printf("\n enter 0 to exit and any other key to continue\n");
      scanf("%d",&y);
  if(y==0){
  
	    exit(0);
//		clrscr();
		printf("\n dice game");}
       x= rand() % 3;
	switch(x)
	     {
	 case 1 :printf("value 1");
       break;
	  case 2 :printf("value 2");
       break;
	   case 3 :printf("value 3");
       break;
	      case 4 :printf("value 4");
       break;
	       case 5 :printf("value 5");
       break;
		 case 6 :printf("value 6");
       break;
	   default:printf("retry");
	      break;
		  }
//		     getch();
		       goto start;
				    }


