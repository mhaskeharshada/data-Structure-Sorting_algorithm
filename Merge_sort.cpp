/*
  program : Merge sort 
  Developer name : Mhaske Harshada satish .
  date of performance : 11 dec,2021
  
  
  Time Complexity : O(nlogn)

*/


#include<stdio.h>
void Merge_Sort(int a[],int ,int);
void Merge(int a[],int ,int,int);
int main()
{
	int a[10],n,i;
	printf("Enter number:");
	scanf("%d",&n);
	printf("Array elements are \n");
	for(i=0;i<n;i++)
	{
		printf("Array[%d] =",i+1);
		scanf("%d",&a[i]);
		
	}
	Merge_Sort(a,0,n-1);
	printf("Array after applying merge sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
void Merge_Sort(int a[],int i,int j)
{
	int k;
	if(i<j)
	{
		k=(i+j)/2;
		Merge_Sort(a,i,k);
	    Merge_Sort(a,k+1,j);
	    Merge(a,i,k,j);

		
	}
}
void Merge(int a[],int l ,int m,int u)
{
	int c[30],i,j,k;
	i=l;
	j=m+1;
	k=0;
	while(i<=m && j<=u)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=a[j];
		}
	}
	while(i<=m)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	
}



