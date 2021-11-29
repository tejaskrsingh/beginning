/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
int a=2;
int i=1;
int tab;
do
{
    tab=2*i;
   printf("\n %d * %d = %d",a,i,tab);
   i++;
}while(i<=10);
}
