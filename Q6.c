//Write a C program to use the sizeof() operator to find the size of different data types.
#include<stdio.h>
int main()
{
    /*int;
    float;
    char;
    double;
    long;
    short;*/

   printf("Integer size = %lu ",sizeof(int));
   printf("\nFloating-Point size = %lu",sizeof(float));
   printf("\nCharacter size = %lu",sizeof(char));
   printf("\nDouble size = %lu",sizeof(double));
   printf("\nLong size = %lu",sizeof(long));
   printf("\nShort Value = %lu",sizeof(short));




    return 0;
}