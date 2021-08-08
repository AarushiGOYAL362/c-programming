/*To find profit and lose if selling n cost price is given */
#include<stdio.h>
int main()
{
	int CP,SP;
	
	printf("enter CP and SP \n");
	scanf("%d %d",&CP,&SP);
	if(CP>SP)
	{
		printf("loss=%d\n",CP-SP);
	}
		else if (SP>CP)
		{
		printf("profit = %d\n",SP-CP);
	}
	    else 
	    {
	    	printf("no profit and no loss \n");
		}
	}
