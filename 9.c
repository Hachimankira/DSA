/*Write a C program to traverse and display the array 
elements using malloc ( ) function for DMA.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*ptr;
	printf("ENter the size of the array: ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(sizeof(int)*n);
	
	printf("ENter the array elemets: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("Array elemets: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	
}
