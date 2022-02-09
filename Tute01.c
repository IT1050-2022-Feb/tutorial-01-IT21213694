/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int no1,no2;
  float ave;

  printf("Enter the no 1:");
  scanf("%d",&no1);
  printf("Enter the no 2 :");
  scanf("%d", &no2); /* read the value */
  ave =( no1 + no2)/2; /* assign total to sum */
  printf("average is %.2f\n", ave); /* print sum */
  
  return 0;
}

