#include<stdio.h>
void main()
{
int i,j,k,n,e,c=0;
printf("enter no of elements:");
scanf("%d",&n);
int a[n];

e=sizeof(a)/sizeof(a[0]);

printf("enter elements:\n");
for(i=0;i<e;i++)
scanf("%d",&a[i]);

/////////////////////////////////
for(i=0;i<e;i++)
{
	for(j=0;j<e;j++)
		if(a[i]==a[j]&&i!=j)
		break;
		
		
	if(j==e)
	printf("%d ",a[i]);
		
}
///////////////////////////////
printf("  <-- output\n");
}

