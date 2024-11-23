//Write a program to evaluate the following expression: x = a - b / c + d * e

#include<stdio.h>
int main()
{
  int a =40, b=25, c= 15, d=5, e=7;

  int x = a- b/c + d*e;
  //1.Div 25/15=1
  //2.Mult 5*7= 35
  //3.Sub 40-1=39 
  //4.Add 35+39 =74


  printf("Ans: %d",x);



    return 0;
}