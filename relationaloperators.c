/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
   int a,b,c,d;
   printf("Enter value of a: ");
   scanf("%d", &a);
   printf("Enter value of b: ");
   scanf("%d", &b);
   printf("Enter value of c: ");
   scanf("%d", &c);
   printf("Enter value of d: ");
   scanf("%d", &d);
   printf("\n %d eqauls to %d: %d", a,b,a==b);
   printf("\n %d is greater than %d: %d", a,c,a>=b);
   printf("\n %d is smaller than %d: %d", d,c,d<=c);
   printf("\n %d is not equal to %d: %d", a,d,a!=d);
}
