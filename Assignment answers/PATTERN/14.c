#include<stdio.h>
void main()
{
int m,n,i,j,k,x,y,z;
for(m=0;m<7;m++)
{
	for(i=0;i<(7-m);i++)
	printf("%c",65+i);

	for(j=0;j<(2*m-1);j++)
	printf(" ");

	for(k=6-m;k>=0;k--)
	{
	if(k==6)
	k--;
	printf("%c",65+k);
	}

printf("\n");
}
}
