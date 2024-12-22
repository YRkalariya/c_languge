#include<stdio.h>
void main()
{
	int n,i,j,k,x,y,l1,z;

	for(i=1,n=0;i<=5;i++)
	{
		n++;
		for(j=1;j<=i;j++)
		{	
			printf("%d",n);
			if(j==n)
				break;
			printf("*");
		}
		printf("\n");
	}
	for(k=i-2,n=5;k>0;k--)
	{
		n--;
		for(j=1;j<=i;j++)
		{	
			printf("%d",n);
			if(j==n)
				break;
			printf("*");
		}
		printf("\n");
		
	}

	}



