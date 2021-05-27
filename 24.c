/*program to seperatr decimal and integer part of given floating point number */
#include<stdio.h>
int main()
{
	float a,b;
	int c;
	printf("Enter the number: ");
	scanf("%f",&a);
	c= (int)a;
	b=a-c;
	printf("%d\n%f",c,b);
}
