//Write a program to evaluate the following expression: a + b * (c – d) / e
#include<stdio.h>
int main()
{
  int a=5;
  int b=2;
  int c=30;
  int d=6;
  int e=8;

  int sum = a+b * (c-d) / e;
  printf("Ans : %d",sum);
}