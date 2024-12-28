#include<stdio.h>
void main()
{
	int i,j,k,m,n,x,y,z;

	for(i=1;i<6;i++)
	{
		for(x=0;x<=4-i;x++)
			printf(" ");
		for(y=1;y<=(2*i)-1;y++)
			printf("%d",y);
		printf("\n");
	}

	for(j=i-2;j>0;j--)
	{
		for(m=0;m<5-j;m++)
			printf(" ");
		for(n=1;n<(2*j);n++)
			printf("%d",n);
		printf("\n");
	}

}
