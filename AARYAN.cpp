#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

#include<string.h>

typedef struct{  //this keword adds a new name for some existing datatype but doesnot create a new type
	char name[50];
	int bus_num;
	int num_of_seats;
}pd;  //access the pass.details

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
    getch();
    system("cls");
	int menu_choice,choice_return;
	start:
	system("cls");

	printf("    BUS RESERVATION SYSTEM");
	printf("\n1 Reserve A Ticket");
	printf("\n2 View All Available Bus");
	printf("\n3 Exit");
	scanf("%d",&menu_choice);
	switch(menu_choice)
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
	return(0);
}

void viewdetails(void)
{
	system("cls");
	printf("\nBUS.No\t BUS Name\t\t     Destinations\t\t                     fare\t\t     Time\n");
	printf("\n112101\t Aaryan Expresss A\t   Aurangabad to Parbhani\t\t           Rs.1000.0\t\t9am");
	printf("\n112102\t Rohan Humsafar B\t   Mumbai to Pune\t\t                   Rs.1100.0\t\t12pm");
	printf("\n112103\t Shreya Superfast C\t   Manmad to Shirdi\t\t                   Rs.1500.0\t\t8am");
	printf("\n112104\t Vaibhav  D\t           Rameswara to Aurangabad\t\t           Rs.1200\t\t11am");
	printf("\n112105\t Omkar OmnipressE\t    Aurangabad to Madgaon\t\t            Rs.2000.0\t\t7am");
}


void reservation(void)
{
	char confirm;
	int i=0;
	float charges;
	pd busdetails;
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");
	system("cls");
	printf("\nEnter Your Name:> ");
	fflush(stdin);
	gets(busdetails.name);
//	scanf("%d",busdetails.name);
	printf("\nEnter Number of seats:> ");
	scanf("%d",&busdetails.num_of_seats);
	printf("\n\n>>Press Enter To View Available Bus<< ");
	getch();
	system("cls");
	viewdetails();
	printf("\n\nEnter bus number:> ");
	start1:
	scanf("%d",&busdetails.bus_num);
	if(busdetails.bus_num>=112101 && busdetails.bus_num<=112105)
	{
		charges=charge(busdetails.bus_num,busdetails.num_of_seats);
		printticket(busdetails.name,busdetails.num_of_seats,busdetails.bus_num,charges);
	}
	else
	{
		printf("\nInvalid bus Number! Enter again--> ");
		goto start1;
	}

	printf
	("\n\nConfirm Ticket (y / n):>");
	start:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&busdetails.name,busdetails.num_of_seats,busdetails.bus_num,charges);
		printf("\n Reservation successful\n");
		printf("\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
	fclose(fp);
	getch();
}

float charge(int busnum,int num_of_seats)
{
		if (busnum==112101)
	{
		return(1000.0*num_of_seats);
	}
	if (busnum==112102)
	{
		return(1100.0*num_of_seats);
	}
	if (busnum==112103)
	{
		return(1500.0*num_of_seats);
	}
	if (busnum==112104)
	{
		return(1200.0*num_of_seats);
	}
	if (busnum==112105)
	{
		return(2000.0*num_of_seats);
	}
}

void printticket(char name[],int num_of_seats,int busnum,float charges)
{
	system("cls");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nBus Number:\t\t%d",busnum);
	specificbus(busnum);
	printf("\nCharges:\t\t%.2f",charges);
}

void specificbus(int busnum)
{

	if (busnum==112101)
	{
		printf("\nBus:\t\t\tAaryan Expresss A");
		printf("\nDestination:\t\tAurangabad to Parbhani");
		printf("\nDeparture:\t\t9Am ");
	}
	if (busnum==112102)
	{
		printf("\nBus:\t\t\tRohan Humsafar B");
		printf("\nDestination:\t\tMumbai to Pune");
		printf("\nDeparture:\t\t12Pm");
	}
	if (busnum==112103)
	{
		printf("\nBus:\t\t\tShreya Superfast C");
		printf("\nDestination:\t\tManmad to Shirdi");
		printf("\nDeparture:\t\t8Am");
	}
	if (busnum==112104)
	{
		printf("\nBus:\t\t\tVaibhav  D");
		printf("\nDestination:\t\t Rameswara to Aurangabad");
		printf("\nDeparture:\t\t11Am ");
	}
	if (busnum==112105)
	{
		printf("\nBus:\t\t\tOmkar OmnipressE");
		printf("\nDestination:\t\tAurangabad to Madgaon");
		printf("\nDeparture:\t\t7Am");
	}
}
