/*
  program : Bubble sort 
  Developer name : Mhaske Harshada satish .
  date of performance : 10 dec,2021

  Time Complexity : O(n)

*/



#include<stdio.h>
void Bubble_Sort(int arr[],int n);
int main()
{
	int n,i , arr[10];
	printf("Enter no :");
	scanf("%d",&n);
	
	printf("Enter Array Elements\n");
	for(i=0;i<n;i++)
	{
		printf("array [%d] = ",i+1);                // Accept array elements 
		scanf("%d",&arr[i]);
	}
	Bubble_Sort(arr,n);                            // Call the bubble sort function  
	 
}

void Bubble_Sort(int arr[],int n)
{
	int temp=0 ,pass=0,noc=0, i,j;
	for(i=0;i<n-1;i++)
	{
		pass++;
		for(j=0;j<n-1-i;j++)
		{
			noc++;
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		
	}
	printf(" Bubble sort after sorting \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d ",arr[i]);
	 }
	                                                         // print array after applying bubble sort .
	 printf("\nTotal no of passess = %d ",pass);
	 printf("\nTotal no of passess = %d ",noc);

	 
	return;
 } 
