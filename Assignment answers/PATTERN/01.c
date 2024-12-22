#include<stdio.h>
void main()
{
	int num,i,j,k,m,n;

//	printf("enter number of lines\n");
//	scanf("%d",&num);

	for(i=0;i<5;i++)
	{
		for(j=4;j>i;j--)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("* ");
	printf("\n");
	}
	
	for(m=4;m>0;m--)
	{
		for(n=0;n<5-m;n++)
			printf(" ");
		for(n=4;n>4-m;n--)
			printf("* ");
	printf("\n");
	}
}
