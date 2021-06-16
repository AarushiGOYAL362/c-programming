/*to find maximum of 2 numbers*/
#include<stdio.h>
int main() 
{
   int a,b;
   printf("enter the value of a:");   
   scanf("%d",&a); 
   printf("enter the value of b:");   
   scanf("%d",&b); 
   if (b<a)
       printf("maximum is a:%d",a);
   else if
      (a<b)
       printf("maximum is b:%d",b); 
     
     else 
       printf("both are same");
   return 0;
}
