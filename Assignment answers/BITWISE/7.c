#include<stdio.h>
void main()
{
int num,n,m,r,pos,k;
scanf("%d",&num);
printf("enter bit no\n");
scanf("%d",&pos);


for(n=31;n>=0;n--)
printf("%d",num>>n&1);
printf("  <-- binary\n");


k=num>>(32-pos);
r=num<<pos;
m=r|k;
if(num&1<<31)
	{
	m=m&~(1<<31);
//	printf("m=%d",m);
	}

for(n=31;n>=0;n--)
printf("%d",m>>n&1);
printf("  <-- binary\n");
}
