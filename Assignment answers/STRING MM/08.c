#include<stdio.h>
void main()
{
char s[50];
int i,c=0;
printf("enter the string:");
scanf("%[^\n]",s);


for(i=0;s[i];i++)
	if(s[i]==' ')
	c++;

printf("total words = %d\n",c+1);
}
