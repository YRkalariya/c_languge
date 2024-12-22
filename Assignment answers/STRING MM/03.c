#include<stdio.h>
void main()
{
char s[10],ch;
int i,c;
printf("enter string:");
scanf("%s",s);
printf("enter character:");
scanf(" %c",&ch);

for(i=0,c=0;s[i];i++)
{
if(s[i]==ch)
c++;
}
printf("%c is %d times present in given string\n",ch,c);
}
