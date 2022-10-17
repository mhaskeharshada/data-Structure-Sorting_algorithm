/*
  program : Insertion sort  
  Developer name : Mhaske Harshada satish .
  date of performance : 10 dec,2021


  Time Complexity : O(n)
*/


#include<stdio.h>
int i,flag;
 void insertion_sort(int arr[],int n)
   {
   	int key,j,pas=0,noc=0;
   	for(i=1;i<n;i++)
   	{
   		pas++;
   	      key=arr[i];
			 j=i-1;
			 flag=0;
			 while(j>=0 && key<arr[j])	
			 {
			 	noc++;
			 	arr[j+1]=arr[j];
			 	j--;
			 	flag=1;
			 }
			 arr[j+1]=key;
    
    if(flag==0)
    {
    	break;
	}
}
    printf("\nArray after sort\n");
	for(i=0;i<n;i++)
	{
		printf("array[%d]=%d\n ",i,arr[i]);
		
	}
	printf("Total no of passess = %d\n",pas);
	printf("Total no of comparision = %d\n",noc);
		
   }
int main()
{
	int n;
	printf("Enter no :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter array elements :");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("array[%d] = %d\n ",i,arr[i]);
	
	}
	insertion_sort(arr,n);

	
}
  
