/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1=0,sub2=0;
  float average;

  printf("Enter the Mark of Subject 1 : ");
  scanf("%d",&sub1);

  printf("Enter the Mark of Subject 2 : ");
  scanf("%d",&sub2);

  average = (sub1+sub2)/2;
  printf("Average is %.2f",average);
  
  return 0;
}

