#include<stdio.h>
void main()
{
int i,j,k,m,n,x,y,z;

for(m=1;m<=5;m++)
{
	for(i=1;i<=m;i++)
	printf("%d",i);

	for(j=1;j<11-(2*m);j++)
	printf(" ");

	for(k=m;k>=1;k--)
	printf("%d",k);


printf("\n");
}
}
