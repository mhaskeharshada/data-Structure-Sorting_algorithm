/*
  program : Quick  sort 
  Developer name : Mhaske Harshada satish .
  date of performance : 11 dec,2021



   Time Complexity : O(nlogn)
*/

#include<stdio.h>
void Quick_Sort(int a[],int low,int high);
int Partition(int a[],int low,int high);
int main()
{
	int a[10],i,n;
	printf("Enter elements:");
	scanf("%d",&n);
	printf("Array Elements \n");
	for(i=0;i<n;i++)
	{
		printf("array[%d] =",i+1);
		scanf("%d",&a[i]);
	}
	
	Quick_Sort(a,0,n-1);
	printf("Sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("[%d] ",a[i]);
	}
}
void Quick_Sort(int a[],int low,int h)
{
	if(low<h)
	{
		int index = Partition(a,low,h);
		Quick_Sort(a,low,index-1);
		Quick_Sort(a,index+1,h);
	}
}
int Partition(int a[10],int low,int high)
{
	int v,i,j,temp;
	v=a[low];
	i=low+1;
	j=high;
	do
	{
		while(a[i]<=v)
		{
			i++;
		}
		while(a[j]>v)
		{
			j--;
		}
		if(i<j)
		{
			temp = a[i];
			a[i]= a[j];
			a[j]= temp;
		}
	}while(i<j);
	a[low]=a[j];
	a[j]=v;
	return j;
}

