/*to check whether number is positive or negative*/
#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	
	if(a>0)
  printf("it is positive");
	else if(a<0)
  printf("it is negative");
	else 
 printf("it is zero");
   
   return 0;
}
