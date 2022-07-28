/*Write a program to find the sum and average of array 
with n elements using pointer.*/
#include<stdio.h>

int main()
{
	int n,a[100];
	int i,*ptr;	
	float sum=0, avg;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter %d elements: ", n);
	ptr=&a[0]; //address of first element of given array
	for(i=0;i<n;i++)
	{
		scanf("%d", ptr);
		sum=sum+*ptr;
	}
	avg=sum/n;
	printf("Sum=%.2f\n Average=%.2f", sum, avg);
}
