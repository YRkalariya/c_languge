//reverse words in given string:

#include<stdio.h>

void my_strrev_1(char *,char *);
char * my_strchr(char *,char);
void my_strrev(char*);

void main()
{
	char s[50],*p,*q;
	int i,j,k,m,n,o,a,b,c;

	printf("enter the string:");
	scanf("%[^\n]",s);

	p=s;
	while(q=my_strchr(p,' '))
	{
		my_strrev_1(p,q-1);
		p=q+1;
	}
	my_strrev(p);
printf("%s",s);
}

void my_strrev_1(char *p,char*q)
{
	char ch;
	while(p<q)
	{
		ch=*p,*p=*q,*q=ch;
		p++;
		q--;
	}
}

char * my_strchr(char *q,char ch)
{
	while(*q)
	{
		if(*q==ch)
			return q;
		q++;
	}
	return 0;
}

void my_strrev(char *p)
{
	char *q,m;
	q=p;
	while(*q)
	q++;
	q--;
	while(p<q)
	{
		m=*p,*p=*q,*q=m;
		p++;
		q--;
	}
}
