/*to find absolute value of given number*/
#include<stdio.h>
int main() 
{
   int a;
   printf("enter any number:");   
   scanf("%d",&a);  
   if(a<0)
     a=-1*a;   
   printf("absolute value:%d",a);
   return 0;
}
