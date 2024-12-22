#include<stdio.h>
void main()
{
char ch;
printf("enter a character\n");
scanf("%c",&ch);
ch=ch^1<<5;
printf("new character=%c\n",ch);


}
