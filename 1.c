/*Write a C program to insert a new element at a 
particular position in an array.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n;
	int pos, nel;
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
	
	printf("\nEnter the position you want to enter data: ");
	scanf("%d",&pos);
	printf("Enter the element to be insert: ");
	scanf("%d",&nel);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=nel;
	n=n+1;
	
	printf("\nElemets stored in array after insertion are:");
	printf("{");
	for (i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);	
	}
	printf("}");
	getch();	
}
	

