/*to find the day of week given input from 1-7*/
#include<stdio.h>
int main()
{
	int day;
	printf("enter the number of day : ");
	scanf("%d",&day);
	
	if (day==1)
	{
		printf("day is monday");
	}
	else if (day==2)
	{
		printf("day is tuesday");
	}
	else if (day==3)
	{
		printf("day is wednesday");
	}
	else if (day==4)
	{
		printf("day is thrusday");
	}
	else if (day==5)
	{
	printf("day is friday");
}
    else if (day==6)
    {
    	printf("day is saturday");
	}
	else if (day==7)
	{
		printf("day is sunday");
	}
	else 
	printf("error");
}
