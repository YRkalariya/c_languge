#include<stdio.h>
int rev(int);
void main()
{
	int i,num,r,pos,ans;
	printf("enter number:");
	scanf("%d",&num);

	printf("before binary:");
	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("\n");

	ans=rev(num);

	printf("after binary:");
	for(pos=31;pos>=0;pos--)
	printf("%d",ans>>pos&1);
	printf("\n");
}

int rev(int num)
{
static int m,n,c=0,i=0,j=31;
if(i<j)
{
	m=num>>i&1;
	n=num>>j&1;
	if(m!=n)
	{
		num=num^1<<i;
		num=num^1<<j;
	}
	c++;
	i++;
	j--;
	rev(num);

if(c>25)
	return num;
	}}
