/*Write a C program to merge two array and display 
the final array.*/
#include<stdio.h>
#define N1 3
#define N2 3

int main()
{
	int N3=N1+N2;
	int a[N1], b[N2], c[N3], i, index=0;
	
	printf("Enter %d integer numbers for first array\n",N1);
	for(i=0;i<N1;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter %d integer numbers for second array\n",N2);
	for(i=0;i<N2;i++)
	{
		scanf("%d", &b[i]);
	}
	printf("Merging array ");
	for (i=0; i<N1;i++)
	{
		c[index]=a[i];
		index++;	
	}
	for (i=0; i<N2;i++)
	{
		c[index]=b[i];	
		index++;
	}
	
	printf("\nMerged array is:");
	for(i=0;i<(N3);i++)
	{
		printf("%d\n",c[i]);
	}
}

