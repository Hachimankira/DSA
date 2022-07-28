/*Write a program to find the sum  and Average of the 
array elements. Note:  use the malloc( ) function to 
dynamically allocate the memory for array elements.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*p,sum=0;
	float avg;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	p=(int*)malloc(n*sizeof(int));
	
	printf("Enter the array elemets: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
		sum+=*(p+i);
	}
	avg=sum/n;
	printf("Sum=%d\nAverage=%2.f",sum,avg);		
}
