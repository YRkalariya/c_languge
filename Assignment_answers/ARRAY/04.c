//biggest and smallest number

#include<stdio.h>
void main()
{
	int i,j,k,e,a[10],l,s,ss,sl;
	e=sizeof(a)/sizeof(a[0]);

	printf("enter array elements:");
	for(i=0;i<e;i++)
		scanf("%d",&a[i]);

	l=a[0];
	s=a[0];
	sl=a[1];
	ss=a[1];
	for(i=0;i<e;i++)
	{
		if(a[i]>l)
		{
		sl=l;
		l=a[i];
		}
		else if(a[i]>sl&&a[i]!=l)
			sl=a[i];
		else if(a[i]<s&&a[i]!=sl)
		{
		ss=s;
		s=a[i];
		}
		else if(a[i]>sl&&a[i]!=s)
		ss=a[i];
	}
	printf(" second smallest=%d  second highest=%d\n",ss,sl);

}
