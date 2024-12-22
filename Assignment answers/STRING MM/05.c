#include<stdio.h>
void main()
{
char a[10],s[10];
int i;

printf("enter 1st string:");
scanf("%s",a);
printf("enter 2nd string:");
scanf("%s",s);

for(i=0;s[i];i++)
{
if(a[i]!=s[i])
break;
}

if(a[i]==s[i])
printf("same strings\n");
else
printf("different strings\n");

}
