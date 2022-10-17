

/*
  program name : Counting sort 
  Developer name : Mhaske Harshada satish .
  date of performance : 13 dec,2021


  
*/


//counting sort using different function ...
#include<stdio.h>
void count_sort(int a[],int,int);
int get_max(int a[],int);
int main()
{
	int n,i,a[50],m;
	printf("how many numbers u want =");
	scanf("%d",&n);
	printf("enter %d element",n);
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	m=get_max(a,n);
	count_sort(a,n,m);
	for(i=0;i<n;i++)
      {
	     printf("%d\t",a[i]);
      }
}
int get_max(int a[50],int n)
{
	
	int i,k;
	k=a[0];
	for(i=0;i<n;i++)
	{
		if(k<a[i])
		
		k=a[i];
	}
	return k;
}
 void count_sort(int a[50],int n,int m)
{
    int count[100],i,b[50];
	for(i=0;i<=m;i++)	
     {
    	count[i]=0;
	 }
	for(i=0;i<n;i++)
     {
    	count[a[i]]++;
	 }
	for(i=1;i<=m;i++)
     {
    	count[i]=count[i]+count[i-1];
     }
    for(i=n-1;i>=0;i--)
	  {
		
		 b[--count[a[i]]]=a[i];
	  }
for(i=0;i<n;i++)
{
	a[i]=b[i];
	//printf("%d\t",b[i]);
}
}


		
	
	
	
	
	
	
	
		
	
	
		
	
	
	
	
	
	
	
	
	
	



