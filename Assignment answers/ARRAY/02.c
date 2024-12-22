//biggest and smallest number

#include<stdio.h>
void main()
{
	int i,j,k,e,a[10],l,s;
	e=sizeof(a)/sizeof(a[0]);

	printf("enter array elements:");
	for(i=0;i<e;i++)
		scanf("%d",&a[i]);

	l=a[0];
	s=a[0];
	for(i=0;i<e;i++)
	{
		if(a[i]>l)
			l=a[i];
		else if(a[i]<s&&a[i]!=l)
			s=a[i];
	}
	printf("smallest=%d  highest=%d\n",s,l);

}
