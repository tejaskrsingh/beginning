#include <stdio.h>
void main()
{
   int f;
   int temp;
   int k;
   int a[5]={5,2,1,0,3};
   k=a[0];
   for(f=0;f<=4;f++)
   {  
       if(a[f]<=k)
       {
           k=a[f];
       }
   }
   printf("%d",k);
}
