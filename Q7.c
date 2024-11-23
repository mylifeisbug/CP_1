//Write a C program to calculate the area of a circle using the pow() function from math.h.
#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main()
{

   float r =5;
   float sum = (pow(r,2)*PI);

   printf("Area of Circle is = %.2f",sum);
  
 

    return 0;
}