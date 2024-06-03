#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
    int a,b,c;
    int ch;    //expression
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
      printf("enter choice");
      scanf("%d",&ch);
       switch(ch)
	{
	 case 1:c=a+b;
	    printf("%d\n",c);
		  break;
	  case 2:c=a-b;
	     printf("%d\n",c);
	   break;
	    case 3:c=a*b;
	     printf("%d\n",c);
	    break;
	     case 4:c=a/b;
		 printf("%d\n",c);
	      break;
	       defaut: printf("invalid choice");
		break;
		}
		 getch();
		  }
