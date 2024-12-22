#include<stdio.h>
int main()
{
	int i,number,fact=1;

	printf("Enter the number\n");
	scanf("%d",&number);

	for(i=1;i<=number;i++)
	{
		fact=fact*i;

	}
	printf("Factorial of %d is %d\n ",number,fact);
}

