#include<stdio.h>
void main()
{
char s[10];
int i;
printf("enter string:");
scanf("%s",s);

for(i=0;s[i];i++)
{
printf(" %c ",*(s+i));
}
printf("\nlength=%d\n",i);




}
