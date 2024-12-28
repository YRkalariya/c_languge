//remove duplicates
#include<stdio.h>
void main()
{
	int x,i,e,j,k,n,c=0,m;
	printf("enter number of elements:");
	scanf("%d",&n);
	char a[n];
	e=sizeof(a)/sizeof(a[0]);

	printf("enter array elements:");
	for(j=0;j<e;j++)
		scanf(" %c",&a[j]);

	for(j=0;j<e;j++)
		printf(" %c",a[j]);
	printf("\n");
//////////////////////////////////////////
for(x=0;x<e;x++)
{	
for(i=0;i<e;i++)
	{
		for(m=i+1;m<e;m++)
			if(a[i]==a[m])
				{
				for(k=m;k<e;k++)
				a[k]=a[k+1];
				}	

	}
}
//////////////////////////////////////////
//	printf("c=%d",c);
	for(j=0;j<e;j++)
		printf(" %c",a[j]);
	printf("\n");
}
