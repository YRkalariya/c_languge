#include<stdio.h>
void main()
{
	int s,t,u,i,j,k,m,n,x,y,z,r,o,p,a,b,c,d;

	for(m=0;m<6;m++)
	{
		for(r=0;r<6-m;r++)
			printf(" ");
			
		for(j=0;j<=m;j++)
		{
			a=m-j;

			for(s=a,x=1;s>=1;s--)
				x=x*s;///    value of (i-j)!

			for(t=m,y=1;t>=1;t--)
				y=y*t; ////    value of   i!

			for(u=j,z=1;u>=1;u--)
				z=z*u; ///   value of   j!

			c=x*z;

			p=y/c;/// final eq.


			printf("%d ",p);
		}
		printf("\n");
	}
}
