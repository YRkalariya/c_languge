#include<stdio.h>
void main()
{
int no,m,i;

for(no=2;m<=100;no++)
{
for(i=2;i<no;i++)
if(no%i==0)
break;
	if(no==i)
	{
	printf("%d, ",no);
	m++;
	}
}
}
