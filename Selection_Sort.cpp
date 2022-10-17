/*
  program : Selection  sort 
  Developer name : Mhaske Harshada satish .
  date of performance : 10 dec,2021
  
  
  
   Time Complexity : O(n^2)

*/

#include<stdio.h>
void Selection_Sort(int arr[10],int n);
int main()
{
	int arr[10],n,i;
	printf("Enter number:");
	scanf("%d",&n);
	printf("Array elements are \n");
	for(i=0;i<n;i++)
	{
		printf("Array[%d] =",i+1);
		scanf("%d",&arr[i]);
	}
	Selection_Sort(arr,n);
	printf("Array after applying sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
}
void Selection_Sort(int arr[],int n)
{
	int i,j,temp=0,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min = j;
			}
	  }
	  if(min!=i)
			{
			
			temp = arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	
}

