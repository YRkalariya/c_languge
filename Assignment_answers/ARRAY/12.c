#include<stdio.h>
#include<math.h>
void main()
{
int i,j,k,l,n,e,sum=0;
printf("enter number of elements:");
scanf("%d",&n);
int a[n];
//e=sizeof(a)/sizeof(a[0]);

for(i=0;i<n;i++)
a[i]=pow(i+1,2);

for(i=0;i<n;i++)
sum=sum+a[i];

for(i=0;i<n;i++)
{
printf("%d^2=",i+1);
printf("%d ",a[i]);
}

printf("\nsum=%d\n",sum);



}
