
#include <stdio.h>
#include<stdlib.h>
int main()
{  
 int*ptr=(int*) malloc(13* sizeof(int));
 int a=34;
 ptr=&a;
 free(ptr);
 //printf("%s",*str);
 return 0;
  
}
