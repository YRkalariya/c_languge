/// fibonaci
#include<stdio.h>
void fibo(int);
void main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	fibo(n);
	printf("\n");
}
//////////////////////////////////////////
void fibo(int n)
{
	static int i=1,a=0,b=1,r;
	if(i<=n)
	{
		printf("%d  ",a);
		r=a+b;
		a=b;
		b=r;
		i++;
		fibo(n);
	}
}
