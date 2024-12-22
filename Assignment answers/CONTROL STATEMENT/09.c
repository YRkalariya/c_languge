#include<stdio.h>
void main()
{
int num,pos,i,j;
printf("enter the number\n");
scanf("%d",&num);

printf("before reverse num = %d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");
///////////////

for(i=0,j=31;i<j;i++,j--)
if((num>>i&1)!=(num>>j&1))
	{
	num=num^1<<i;
	num=num^1<<j;
	}

//////////////
printf("after reverse num = %d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");


}
