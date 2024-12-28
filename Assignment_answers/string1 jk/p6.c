/*6) Write a program to reverse the string.*/
#include<stdio.h>
int main()
{
	char s[10],*p;
	int i,j;
	p=s;
	printf("Enter the string:\n");
	scanf(" %s",p);
	for(i=0;p[i];i++);
	printf("%d",i);
	for(j=i-1;j>=0;j--)
	printf(" %c",p[j]);
	printf("\n");
	

}
