//factorial
#include<stdio.h>
int fact(int);
void main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
printf("factorial = %d\n",fact(num));
}
//////////////////////////////////////
int fact(int n)
{
	if(n)
	return n*fact(n-1);
	else
	return 1;
}
