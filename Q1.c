//Write a program to demonstrate the use of arithmetic and relational operators.
#include<stdio.h>
int main()
{
   int a = 5;
   int b = 2;
   int sum;

      printf("Arithmetic Operators:-");
        //Addition
        sum=a+b;
        printf("Addition = %d",sum);

        //Subtraction
        sum=a-b;
        printf("\nSubtraction = %d",sum);

        //Multiplication
        sum=a*b;
        printf("\nMultiplication= %d",sum);

        //Division
        sum=a/b;
        printf("\nDivision = %d",sum);

        //Modular
        sum=a%b;
        printf("\nModular = %d",sum);


      printf("\n\nRelational Operators:-");
        //Equal to
        sum= a==b;
        printf("\n\nEqual to = %d",sum);

        //Greater than
        sum= a>b;
        printf("\nGreater than = %d",sum);

        //Less than
        sum=a<b;
        printf("\nLess than = %d",sum);

        //Greater than equal to 
        sum=a>=b;
        printf("\nGreater than equal to = %d",sum);

        //Less than equal to 
        sum=a<=b;
        printf("\nLess than equal to = %d",sum);

        //Not equal to
        sum=a!=b;
        printf("\nNot Equal to= %d",sum);


    return 0;
}