#include<stdio.h>
void main()
{
	char f[50],s[50],d[50];
	int i,j,k,e,a,b,c,m,n,o;
	printf("enter 1st string:");
	scanf("%s",f);
	printf("enter 2nd string:");
	scanf("%s",s);

	for(m=0;f[m];m++);
	for(n=0;s[n];n++);

	for(i=0,a=0,b=0;i<=m+n+1;i++)
	{
		if(i%2==0)
		{
			if(f[a]=='\0')
			{	d[i]=s[b];
				b++;}
			else
			{
				d[i]=f[a];
				a++;
			}
		}
		else
		{
			if(s[b]=='\0')
			{	d[i]=f[a];
				a++;}
				
			else
			{
				d[i]=s[b];
				b++;
			}
		}
	}
	d[i]='\0';

	printf("%s",d);
}
