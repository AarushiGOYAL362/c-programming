/* to calculate the electricity bill when the condition of meter reading are : unit less than 100->2.25,100-200->3.00,200-500->4.25 and above 7.00rs */
#include<stdio.h>
int main()
{
	float unit;
	printf("enter the unit : ");
	scanf("%f",&unit);
	
	if (unit<100)
	{
	printf("total amount to pay for electricity bill = %f",unit *=2.25);
}
	
	else if (unit<200 && unit>=100)
	{
	printf("total amount to pay for electricity bill = %f",unit *=3.00);
}
	
	else if ( unit<500 && unit>=200)
	{
	
	printf("total amount to pay for electricity bill = %f",unit *=4.25);
}
	
	else 
	{
	
	printf("total amount to pay for electricity bill = %f",unit *=7.00);
}
	return 0;
}
