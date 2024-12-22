#include<stdio.h>
void main()
{
int i,j,k,x=0,y=0,n,e,c=0;
printf("enter no of elements:");
scanf("%d",&n);
int a[n],f[n],s[n];

e=sizeof(a)/sizeof(a[0]);

printf("enter elements:\n");
for(i=0;i<e;i++)
scanf("%d",&a[i]);

/////////////////////////////////
for(i=0;i<e;i++)
{
	for(j=0;j<e;j++)
		if(a[i]==a[j])
		{
		s[x]=a[i];
		x++;
		}
		
		
	if(j==e)
	{
	f[y]=a[i];
	y++;
	}
		
}
///////////////////////////////

printf("first slot:");
for(i=0;i<e;i++)
printf("%d ",f[i]);


printf("second slot:");
for(i=0;i<e;i++)
printf("%d ",s[i]);
}
