/*Write a C program to update array at a particular 
position in an array.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n;
	int pos, num;
	printf("Enter any five element of an array: ");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\nElemets stored in array are:");
	printf("{");
	for (i=0;i<5;i++)
	{
		printf("\t%d\t",a[i]);	
	}
	printf("}");
	
	printf("\nEnter the position you want to update data: ");
	scanf("%d",&pos);
	printf("Enter new data\n: ");
	scanf("%d",&num);
	a[pos]=num;
	
	printf("Array after update: ");
	printf("{");
	for (i=0;i<5;i++)
	{
		printf("\t%d\t",a[i]);	
	}
	printf("}");
	
	getch();	
}
	
