/*Write a program using pointer to read n integers in an 
array and display its elements in reverse order using 
the malloc( ) function for DMA..*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *p,n,i;
      printf("Enter the size of array: ");
      scanf("%d",&n);
      p=(int*)malloc(n * sizeof(int));
      printf("\nEnter the array elemets:\n");
      for(i=0;i<n;i++)
      {
            scanf("%d",p+i);
      }
      printf("\nArray in Reverse Order: \n\n");
      n=n-1;
      for(i=n;i>=0;i--)
      {
            printf(" %d",*(p+i));
      }
      return 0;
}

