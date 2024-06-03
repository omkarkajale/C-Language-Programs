#include<stdio.h>
#include<stdlib.h>
struct ndt{
	int data;
	struct ndt* next;
};
typedef struct ndt node;
void display(void);
void create(void);
void insert(void);
node *start;
int main(){
	int ch;
	do{
		  printf("This Progrm to implement a linkedlist\n");
		  printf("1 for create\n");
		  printf("2 for insert\n");
		  printf("3 for display\n");
		  printf("4 for exit\n");
		  scanf("%d",&ch);
		  switch(ch){
		  	case 1: create(); break;
		  	case 2:insert() ; break;
		  	case 3: display();break;
		  	case 4:exit(0);
		  }
	}while(1);
	return 22;
}
