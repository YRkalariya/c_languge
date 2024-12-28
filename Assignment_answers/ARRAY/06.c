#include<stdio.h>
void main()
{
	int i,j,k,e,n,m;
	printf("enter no of elements:");
	scanf("%d",&n);
	int a[n];

	e=sizeof(a)/sizeof(a[0]);

	printf("enter array elements;");
	for(i=0;i<e;i++)
		scanf("%d",&a[i]);

	printf("enter no of index which you want to delete:");
	scanf("%d",&m);

	for(i=m;i<e;i++)
		a[i]=a[i+1];
	a[i]=0;

	printf("new array:");
	for(i=0;i<e-1;i++)
		printf("%d ",a[i]);
printf("\n");
}
