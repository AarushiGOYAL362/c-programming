/*to find maximum of 3 numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);
	if((b<a)&&(c<a))
	printf("maximum is a :%d",a);
	else
	if((a<b)&&(c<b))
	printf("maximum is b:%d",b);
	else 
	if((a<c)&&(b<c))
	printf("maximum is c :%d",c);
	else
	printf("they are same");
	
	return 0;
}
