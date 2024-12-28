#include<stdio.h>

void rev_arr(int*,int);
///////////////////////////////////////////////
void main()
{
	int i,j,e,num;
	int a[5];
	e=sizeof(a)/sizeof(a[0]);

	printf("enter array elements:");
	for(i=0;i<e;i++)
		scanf("%d",&a[i]);

	rev_arr(a,e-1);

	printf("after reverse : ");
	for(i=0;i<e;i++)
		printf("%d ",a[i]);
	printf("\n");
}
///////////////////////////////////////////////////
void rev_arr(int *p,int j)
{
	static int i=0,t;
	if(i<j)
	{
		t=p[i],p[i]=p[j],p[j]=t;
		i++;
		j--;
		rev_arr(p,j);
	}
}
