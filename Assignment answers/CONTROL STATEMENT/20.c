//Q20

#include<stdio.h>
void main()
{
	int num,num1,i,sum;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1,sum=0;i<num;i++)
	{
		if(num%i==0)
			sum=sum+i;
	}
		if(num==sum)
			printf("Yes, %d is perfect Number...\n",num);
		else
			printf("No, %d is not perfect number..\n",num);
	
}
