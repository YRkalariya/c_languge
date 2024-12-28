#include<stdio.h>
int factor(int);

void main()
{
int num,r;
printf("enter the number:");
scanf("%d",&num);
printf("\nsum = %d\n",factor(num));
}
/////////////////////////////////////////////
int factor(int n)
{
	static int i=1,sum=0;
	if(i<n)
	{	
		if(n%i==0)
		{
		printf("%d ",i);
		sum=sum+i;
		}
		i++;
		factor(n);
	}
	else
	return sum;
}
