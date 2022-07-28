/*Write a C program to delete array element at a 
particular position in an array.*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
	int a[100],i,n,pos;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\nElemets stored in array are:");
	printf("{");
	for (i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);	
	}
	printf("}");
	printf("\nEnter the position you want to delete data: ");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	printf("{");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("}");
	getch();	
}
	

