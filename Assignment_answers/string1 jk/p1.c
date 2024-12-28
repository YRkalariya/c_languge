//1) Write a program to find string length using pointer.//
#include<stdio.h>
int main()
{
	char s[5],*p;
	int i;
	printf("Enter the string:\n");
	scanf("%s",s);
	p=s;
	for(i=0;p[i];i++)
	printf("%c",p[i]);
	printf("\nlength=%d\n",i);

}
