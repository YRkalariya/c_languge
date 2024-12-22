//addision of even and product of odd numbers
#include<stdio.h>
void main()
{
int i,j,k,e,a[10],odd=1,even=0;
e=sizeof(a)/sizeof(a[0]);
printf("enter array elements:");
for(i=0;i<e;i++)
scanf("%d",&a[i]);

for(i=0;i<e;i++)
{
	if(a[i]%2==0)
	even+=a[i];
	else
	odd*=a[i];
}
printf("addision of even numbers=%d  product of odd numbrs=%d\n",even,odd);
}
