#include<stdio.h>
int lar(int *,int);
void main()
{
int i,r,n,ele;
printf("enter number of array elements");
scanf("%d",&n);
int s[n];
ele=sizeof(s)/sizeof(s[0]);
printf("enter elements");

for(i=0;i<ele;i++)
scanf("%d",&s[i]);

r=lar(s,ele);
printf("largest element : %d\n",r);
}

int lar(int *p,int ele)
{
	static int l=0,c=0,i=1;
	if(i<ele)
	{	if(p[i]>l)
		{l=p[i];
		c++;}
	i++;
	lar(p,ele);

	}
if(c>0)
return l;
}
