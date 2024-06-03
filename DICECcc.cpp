#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int a,b;
	start:
		cout<<"Enter 0 for Exit And Othr for continue \n";
		cin>>b;
		if(b==0){
			exit(0);
		}
		a=rand()%7;
		switch(a){
			case 1: cout<<"Value 1\n"; break;
			case 2: cout<<"Value 2\n";break;
			case 3: cout<<"Value 3\n";break;
			case 4: cout<<"Value 4\n";break;
			case 5: cout<<"Value 6\n";break;
			case 6: cout<<"Value 5\n";break;
			default:cout<<"Retry\n"; break;
		}
		goto start;
	
}
