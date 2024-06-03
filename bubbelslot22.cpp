#include<stdio.h>
int main()
{
	int q,w,s[10]={1,2,3,4,11,6,7,8,9,10};		
	  for(q=0;q<=9;q=q+1)
	  {
      	for(w=0;w<=9;w=w+1)
              	{	
              	// swap
       			 if(s[w]>s[w+1])
			  {
			 	int temp=s[w];
			 	s[w]=s[w+1];
			 	s[w+1]=temp;	
	             }
	           }   
	       }
         //print
		 for(q=0;q<=9;q=q+1)
				{
				printf("%d\n",s[q]);
				}
				return 0;
				}

