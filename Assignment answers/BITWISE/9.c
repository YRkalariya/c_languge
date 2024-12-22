//q9
#include<stdio.h>
void main()
{
int n,i,j,m,num,pos;
printf("\nenter a number\n");
scanf("%d",&num);
printf("\nbefore reverse num=%d\n",num);
for(pos=31;pos>=0;pos--)
{
printf("%d",num>>pos&1);
	if(pos%8==0)
	printf(" ");
}
printf("\n");

for(i=0,j=31;i<j;i++,j--)
{
m=num>>i&1;
n=num>>j&1;
	if(m!=n)
	{
	num=num^1<<i;
	num=num^1<<j;
	}
}
printf("\nafter reversing num =%d\n",num);
for(pos=31;pos>=0;pos--)
{
printf("%d",num>>pos&1);
	if(pos%8==0)
	printf(" ");}
printf("\n\n");
}
