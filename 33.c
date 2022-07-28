/*Write a C program to delete array element at a 
particular position in an array.*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
	int i,n,pos;
	int a[5]={1,2,3,4,5};
	printf("\nEnter the position you want to delete data: ");
	scanf("%d",&pos);
	for(i=pos;i<5;i++)
	{
		a[i]=a[i+1];
	}
	printf("{");
	for(i=0;i<4;i++){
		printf("%d\t",a[i]);
	}
	printf("}");
	getch();	
}
	

