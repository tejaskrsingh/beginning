#include <stdio.h>
#include <time.h>

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
    switch(a)
    {
        case '+' :
        {
        d=b+c;
        printf("Addition of %d and %d is: %d", b,c,d);
        break;
        }
        case '-' :
        {
        d=b-c;
        printf("Substraction of %d and %d is: %d", b,c,d);
        break;
        }
        case '*' :
        {
         d=c*b;
        printf("Multiplication of %d and %d is: %d", b,c,d);
        break;
        }
        case '/' :
        {
        d=b/c;
        printf("Division of %d and %d is: %d", b,c,d);
        break;
        }
    }
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("time taken by: %f",cpu_time_used);
}
