#include<stdio.h>
void main()
{
int i,j,k,e,n,pos;
char ch;
printf("enter no of elements:");
scanf("%d",&n);
n++;
char a[n];

e=sizeof(a)/sizeof(a[0]);

printf("enter the elements:");
for(i=0;i<e-1;i++)
scanf(" %c",&a[i]);

printf("enter character:");
scanf(" %c",&ch);

printf("enter the index number:");
scanf("%d",&pos);

for(i=e;i>=e-pos-1;i--)
	a[i]=a[i-1];

a[pos]=ch;

printf("new array\n");
for(i=0;i<e;i++)
printf(" %c",a[i]);
}
