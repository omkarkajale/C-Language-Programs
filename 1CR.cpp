#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
struct stack{
int size;
int top;
int *arr;	
};
int isEmpty(struct stack* ptr){
	if(ptr->top==-1){//if top having -1 means stack is empty
	return 1;///means true
	}else{
		return 0;
	}
	  }
int isfull(struct stack * ptr)
{
	if(ptr->top==ptr->size - 1)// the size of ptr -> is equal to ptr size - 1 means, 
//stack is full , example size is 50 total size betn 0-49 is 50 ...	
	{
	return 1;//true    
	
	}else{
		return 0;
	}
} 
void push(struct stack* ptr,int val){
	if(isfull(ptr)){
		printf("Stack is full,Overflow,cannot push");
	}else{
		ptr->top++;
		ptr->arr[ptr->top] = val;
		
	}
}
int pop(struct stack* ptr){
	if(isEmpty(ptr)){
		printf("UNderflow,Stack is Empty cannot pop");
return -1;
	}else{
		int val = ptr->arr[ptr->top];
		ptr->top--;
	return val;
	}
}
int main(){
	struct stack *to = (struct stack*)malloc(sizeof(struct stack));
	to->size =10;
	to->top = -1;
	to->arr =(int*)malloc(to->size*sizeof(int));
    printf("Stack is Created successfully \n");
    printf("Before pushing Stack is full %d\n",isfull(to));
	printf("Before pushing Stack is Empty %d\n",isEmpty(to));
push(to,1);
push(to,2);
push(to,3);
push(to,4);
push(to,5);
push(to,6);
push(to,7);
push(to,8);
push(to,9);
push(to,10);
	printf("After pushing Stack is full %d\n",isfull(to));
	printf("After pushing Stack is Empty %d\n",isEmpty(to));
	printf("The number  is %d pop from Stack",pop(to));
}
