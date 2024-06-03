#include<stdio.h>
//Functions With Parameter & Without return type
int Sum(){
	int A ,B , C ,R;
	
	printf("Enter the Numbers");
	scanf("%d %d %d",&A,&B ,&C);
	 R=A+B+C;
	printf(" Sum is :%d ",R);
	
}

int main(){
	int Z =Sum();
}
