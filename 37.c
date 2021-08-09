/*mini calculator that perform action on char bit input like +,-,*,/  */
#include<stdio.h>
int main()
{
	float a,b;
	char c;
	printf("enter \n+ for addition\n- for subtraction\n * for multiplication\n / for division\n");
	scanf("%c",&c);
	
	printf("enter the value of a : ");
	scanf("%f",&a);
	printf("enter the value of b : ");
	scanf("%f",&b);
	
	if(c=='+')
	{
	printf("answer is %.2f",a+b);
}
	else if (c=='-')
	{
	printf("answer is %.2f",a-b);
}
	else if (c=='*')
	{
	printf("answer is %.2f",a*b);
}	
	else if (c=='/')
	{
	printf("answer is %.2f",a/b);
}	
	else 
	{
	printf("invalid selection");
}
	
	return 0;
	
}
