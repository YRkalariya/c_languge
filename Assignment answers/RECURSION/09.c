//perfet number
#include<stdio.h>
int perfect(int);

void main()
{
	int n,r;
	printf("enter number:");
	scanf("%d",&n);
	r=perfect(n);
	if(r==1)
		printf("perfect");
	else
		printf("not a perfect");
	printf("\n");
}

int perfect(int n)
{
	static int i=1,sum=0,c=0;
	if(i<n)
	{
		if(n%i==0)
			sum=sum+i;

		if(sum==n)
			c++;
		else
		{
			i++;
			perfect(n);
		}
	}
	if(c==1)
		return c;
}
