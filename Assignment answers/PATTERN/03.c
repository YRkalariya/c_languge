#include<stdio.h>
void main()
{
int i,j,k,x,y,z;

for(i=0;i<6;i++)
{
	for(j=0;j<i;j++)
	printf(" ");
	for(k=0;k<6-i;k++)
	printf("* ");
printf("\n");
}

for(x=i-1;x>=0;x--)
{
	for(y=0;y<x;y++)
	printf(" ");
	for(z=1;z<7-x;z++)
	printf("* ");
printf("\n");
}

}
