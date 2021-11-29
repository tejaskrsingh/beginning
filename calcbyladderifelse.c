#include <stdio.h>
#include <time.h> // to calculate time taken to run and perform out//

void main()
{
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    char a;
    printf("Enter + , -, * or / for performing specific function");
    scanf("%c", &a);
    int b,c,d;
    printf("Enter first number");
    scanf("%d",&b);
    printf("Enter second number");
    scanf("%d",&c);
    if(a=='+')
    {
        d=b+c;
        printf("Addition of %d and %d is: %d", b,c,d);
    }
    else if(a=='-')
    {
        d=b-c;
        printf("Substraction of %d and %d is: %d", b,c,d);
    }
    else if(a=='*')
    {
        d=c*b;
    printf("Multiplication of %d and %d is: %d", b,c,d);
    }
    else
    {
        d=b/c;
        printf("Division of %d and %d is: %d", b,c,d);
    }
         end = clock();
         cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
         printf("time taken by: %f",cpu_time_used);
}
