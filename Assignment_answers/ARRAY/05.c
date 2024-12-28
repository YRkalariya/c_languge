//reverse array
#include<stdio.h>
void main()
{
	int e,i,j,n,t;
	printf("enter no of elements:");
	scanf("%d",&n);
	int a[n];
	e=sizeof(a)/sizeof(a[0]);
	printf("enter elements:");
	for(i=0;i<e;i++)
	scanf("%d",&a[i]);
	for(i=0,j=e-1;j>e/2;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	printf("after reversing : ");
	for(i=0;i<e;i++)
		printf("%d",a[i]);
	printf("\n");
}
