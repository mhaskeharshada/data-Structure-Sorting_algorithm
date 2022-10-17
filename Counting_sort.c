/*
  program name : Counting sort 
  Developer name : Mhaske Harshada satish .
  date of performance : 13 dec,2021


  Time Complexity : O(n+k)
*/



#include<stdio.h>
void Counting_Sort(int [],int);
//int Max_Ele(int a[],)
int main()
{
	int num,arr[10],i;
	
	printf("Enter How many Element in Array: ");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&arr[i]);
    }
	
	
	Counting_Sort(arr,num);
	
	printf("After Array: ");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
}

void Counting_Sort(int arr[],int num)
{
	int i;
   int max=arr[0];
   int count[100];
   int brr[10];
   
   for( i=0;i<num;i++)
   {
   	 if(arr[i]>max)
   	 {
   	 	max=arr[i];
	 }
   }
   
    for( i=0;i<=max;i++)
    {
      count[i]=0;	
	}
	
	for( i=0;i<num;i++)
	{
		count[arr[i]]++;
	}
	
	 for( i=1;i<=max;i++)
	 {
	 	count[i]=count[i]+count[i-1];
	 }
	 
	 for( i=num-1;i>=0;i--)
	 {
	 	brr[count[arr[i]]-1]=arr[i];
	 	count[arr[i]]--;
	 }
	 
	for( i=0;i<num;i++)
	{
		arr[i]=brr[i];
	}
 return;
}
