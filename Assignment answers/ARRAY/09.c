#include<stdio.h>
void main()
{
	int i,j,g,k,c,e,n,m;
	printf("enter no of elements:");
	scanf("%d",&n);
	int a[n];

	e=sizeof(a)/sizeof(a[0]);
	printf("enter elements:");
	for(k=0;k<e;k++)
		scanf("%d",&a[k]);

	for(i=0;i<e;i++)
	{
		for(j=i+1,c=0;j<e;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c>0)
		{
		for(g=0;g<i;g++)
		if(a[i]==a[g])
		break;
		
		printf("%d -- %d times\n",a[i],c+1);
			
		}
	}
}

