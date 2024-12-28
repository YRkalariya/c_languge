#include<stdio.h>
void prime(int);
void main()
{
	int n,i;
	printf("enter range:");
	scanf("%d",&n);
	prime(n);
	printf("\n");
}

void prime(int n)
{
	static int i,c=0,num=2;
	if(c<=n)
	{
		for(i=2;i<num;i++)
			if(num%i==0)
				break;
			if(num==i)
			{
				printf("%d ",num);
				c++;
			}
	num++;
	prime(n);	
			
	}
}
