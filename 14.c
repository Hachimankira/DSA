/*Write a program to find the sum and average of the array 
elements. Note:  use the calloc( ) function 
to dynamically allocate the memory for array elements*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*p;
	float avg,sum=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	p=(int*)calloc(n, sizeof(int));
	
	printf("Enter the array elemets: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
		sum+=*(p+i);
	}
	avg=sum/n;
	printf("Sum=%.2f\nAverage=%.2f",sum,avg);	
}
