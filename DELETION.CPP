#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void traversal(struct node *ptr){
while(ptr!=NULL){
printf("Elements are : %d\n",ptr->data);
ptr=ptr->next;
}
}  /*
struct node * deleteindex(struct node *head ,int index){
struct node *ptr=head;
struct node *p=head;
struct node *q=head->next;
for(int i=0;i<index-1;i++){
p=p->next;
q=q->next;
}
p->next=q->next;
free(q);
return head;
} */
struct node * findmiddel(struct node *head ){
struct node *q=head;
struct node *p=head;
while(q&&q->next){
p=p->next;
q=q->next->next;
} printf("MIddle element is :%d",p->data);
return head;}

void main()
{            clrscr();
struct node *head;
struct node *second;
  struct node *third;
  head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  head->data=44;
  head->next=second;
  second->data=43;
  second->next=third;
  third->data=99;
  third->next=NULL;

  traversal(head);
  printf("\nafter deletion\n") ;
 // head =deleteindex(head,2);
   findmiddel(head);
  traversal(head);
getch();
}