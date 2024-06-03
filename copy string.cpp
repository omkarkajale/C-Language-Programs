#include<stdio.h>
#include<string.h>
int main()
{
     
 char str[50],str2[40];
  printf("enter any string:");
  scanf(str); //input
  printf("enter any string2:");
  scanf(str2);
  if(strcmp(str,str2)==0)
  printf("equal");
  else
  printf("not equal");
	return 0;
}
