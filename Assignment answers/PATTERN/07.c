#include<stdio.h>
void main()
{
	int m,n,i,j,k,x,y,z;

	for(i=1;i<=6;i++)
	{
		if(i%2==1)
		{
		for(j=0;j<2*i;j++)
		if(j%2==1)
		printf("%d ",j);
		}
	

		if(i%2==0)
		{
		for(k=1;k<=2*i;k++)
		if(k%2==0)
		printf("%d ",k);
		}


	printf("\n");
	}
}
