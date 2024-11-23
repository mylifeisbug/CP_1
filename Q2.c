//Write a C program that uses the ternary operator to check whether a number is positive, negative, or zero.
#include<stdio.h>
int main()
{
   int a=5;


   (a>0) ? printf("%d is an Positve No",a):
   (a<0) ? printf("%d is an Negative No",a):
   printf("%d is equal to Zero");




    return 0;
}