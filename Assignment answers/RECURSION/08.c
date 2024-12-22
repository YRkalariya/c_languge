#include<stdio.h>
void palin(int);

void main()
{
	int n,i;
	printf("enter rang:");
	scanf("%d",&n);
	palin(n);
	printf("\n");
}

void palin(int n)
{
	static int num=11,sum,c=0,num1;
	if(c<=n)
	{
		num1=num;
		for(sum=0;num1;num1/=10)
			sum=sum*10+num1%10;
		if(num==sum)
		{
			printf("%d ",num);
			c++;
		}
		num++;
		palin(n);
	}
}
