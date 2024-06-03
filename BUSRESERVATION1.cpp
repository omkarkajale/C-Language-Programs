#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char name[50];
	int bus_num;
	int num_of_seats;
}pd;
void reservation(void);
void viewdetails(void);
void printticket(char name[],int,int,float);
void specificbus(int);
float charge(int,int);
int main()

{
	system("cls");
	printf("\t\t||          !! BUS TICKET RERSERVATION SYSTEM !!            ||\n");
    printf("\t\t||   !! BY @AARYAN , @ROHAN ,@SHREYA , @VAIBHAV , @OMKAR !! ||\n");
    
    printf("\t\t               *--*--*--*-*--*---*--*-*                      \n");
    printf("\t\t--------*---*----press any key to continue----*----*------\n");
system("cls");
	int main_menu,return_menu;
	start:
	system("cls");
	printf("\n=================================\n");
	printf("    BUS RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Bus");
	printf("\n------------------------");
	printf("\n3>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
		scanf("%d",&main_menu);
	switch(main_menu)
	{
		case 1:
			reservation();
			break;
		case 2:
			viewdetails();
			printf("\n\nPress any key to go to Main Menu..");
			getch();
			break;
		case 3:
			return(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;
	return 1 ;
	}
