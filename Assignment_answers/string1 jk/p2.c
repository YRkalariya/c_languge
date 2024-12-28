//2) Write a one line code to copy the string into another buffer.//
#include<stdio.h>
int main()
{
	char i,s[6]="hello",d[6];
	char *p=s,*q=d;
	
	for(i=-1 ;s[i];i++,d[i]=s[i],printf("%c",d[i]));
}
