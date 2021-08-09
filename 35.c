/*perform arithmetic operations ( addition/sub./multiplication/div.)on two given numbers according to users choice*/
#include<stdio.h>
int main()
{
	int num1,num2;
	int sum,sub,mult;
	float div;
	printf("input any two numbers : ");
	scanf("%d%d",&num1,&num2);
	
	sum=num1+num2;
	sub=num1-num2;
	mult=num1*num2;
	div=num1/num2;
	
	printf("the sum of the given num : %d\n",sum);
	printf("the sub of the given num : %d\n",sub);
	printf("the product of the given num : %d\n",mult);
	printf("the div of the given num : %f\n",div);
	
	return 0;
}
