 #include<stdio.h>

/*int linearsearch(int arr[],int size,int element)
     {
for (int i = 0;i < size; i++)
     {  if(arr[i]==element)
      { return i ;
     }
return -1;     
	 }*/
int binarysearch(int arr[],int size,int element)
     {
     	int low,mid,high;
     	low=0;
     	high=size-1;
     	//keep searching until low is less than equal to(<=) high
     	//start searching
     	while(low <= high){
     		
     	mid=(low+high)/2;
     	if(arr[mid]==element){
     		return mid;
		 }
		 if(arr[mid]<element){
		 	low = mid + 1;
		 }
		 else {
		 	high = mid - 1;
		 }
		 //searching ends
       }
	   return -1;
	   }
int main()  {
	
	//int arr[]={1,2,3,4,5,46,7,8,9,100,411,12,13};   //unsorted array
	//int size = sizeof(arr)/sizeof(int);
	//int element = 3;
	//int searchIndex = linearsearch(arr,size,element);
	int arr[]={1,2,22,54,765};   //sorted array
	int size = sizeof(arr)/sizeof(int);
	int element = 22;
	int searchIndex = binarysearch(arr,size,element);
	printf("The element %d was found at index %d \n",element,searchIndex);
	return 0;
   }
