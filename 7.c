/*Write a program using pointer to read n integers 
in an array and display its elements in reverse order.*/
#include<stdio.h>
int main()
{
	int arr[100],n,i,*ptr;
	ptr=&arr[0];
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&arr[0];
	printf("Array elements: ");
	printf("{");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*ptr);
		*ptr++;
	}
	printf("}");
	
	ptr=&arr[n-1];
	
	n=n-1;
	printf("\nArray elements in reverse order: ");
	printf("{");
	for(i=n;i>=0;i--)
	{
		printf("%d\t",*ptr);
		ptr--;
	}
	printf("}");
	
}
