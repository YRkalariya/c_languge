// count prime numbers and store in other array
#include<stdio.h>
void main()
{
	int i,j,k,e,c=0,n=0,a[10],m[10];
	e=sizeof(a)/sizeof(a[0]);
	printf("enter array elements:");
	for(i=0;i<e;i++)
		scanf("%d",&a[i]);

	for(i=0;i<e;i++)
	{
		for(j=2;j<a[i];j++)
			if(a[i]%j==0)
				break;
		if(a[i]==j)
		{
			m[n]=a[i];
			c++;
			n++;
		}
	}
	printf("count =%d\n",c);
	for(k=0;k<c;k++)
		printf(" %d ",m[k]);
	printf("\n");
}
