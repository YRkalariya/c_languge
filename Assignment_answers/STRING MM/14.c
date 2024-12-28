#include<stdio.h>
void main()
{
char s[50];
int i;

printf("enter the string:");
scanf("%[^\n]",s);

for(i=0;s[i];i++)
{
	if(s[i]>='a'&&s[i]<='z')
	s[i]-=32;
	else if(s[i]>='A'&&s[i]<='Z')
	s[i]+=32;
}

printf("output : %s\n",s);
}
