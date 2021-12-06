/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int a[5];
    int i;
    int j;
    for(i=0;i<=4;i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=0;j<=4;j++)
    {
        printf("%d", a[j]);
    }
}
