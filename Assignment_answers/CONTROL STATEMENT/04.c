#include<stdio.h>
void main()
{
char ch;
printf("enter the character\n");
scanf("%c",&ch);

if(ch>>5&1)
ch=ch&~(1<<5);
else
ch=ch|1<<5;

printf("new character = %c\n",ch);
}
