/*Write a C program to traverse and display the array 
elements using pointer.*/
#include<stdio.h>                                                               
                                                                                
void main()                                                                     
{                                                                               
  int arr_list[] = {10, 8, 6, 4, 2, 1};                                         
  int *ptr;                                                                     
  for(ptr=&arr_list[0];ptr<=&arr_list[5];ptr++)                                 
  {                                                                             
    printf("%d\t", *ptr);                                                       
  }                                                                             
}  
