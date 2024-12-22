#include<stdio.h>
void main()
{
char s[10];
int i,j,k,t;

printf("enter the string:");
scanf("%s",s);

for(i=0;s[i];i++); 	//counting string length
for(j=0,k=i-1;j<k;j++,k--)
{
t=s[j];
s[j]=s[k];
s[k]=t;
}
printf("new string:%s",s);

}
