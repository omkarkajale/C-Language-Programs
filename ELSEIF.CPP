#include<stdio.h>
#include<conio.h>
main()
{
     clrscr();
	  int marks;
	  printf("enter marks\n");
	  scanf("%d",&marks);
	if(marks==100)
	    {
	   printf("ginius\n");
	     }
	 else if(marks>=80 && marks<100)
	      {
	     printf("topper\n");
		    }
	       else if(marks>=60 && marks<80)
	       {
		  printf("\nfirst");
				  }
				 else
				 {
				  printf("average");
						  }
					     getch();
							     }
