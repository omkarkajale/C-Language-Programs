#include<stdio.h>
int main(){
	int A[7];
	printf("Enter array element ");
	for(int i=0;i<7;i++){
		scanf("%d\n",&A[i]);
	}for(int i=0;i<7;i++){
		for(int j=i+1;j<7;j++){
			if(A[i]>A[j]){
				int temp = A[i];
				A[i]=A[j];
				A[j] = temp;
			}
		}
	}
		printf("Aarray element ");
	for(int i=0;i<7;i++){
		printf("%d\n",A[i]);
	}
}
