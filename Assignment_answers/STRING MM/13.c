#include<stdio.h>
void main()
{
char s[50];
int i,j,c1=0,c2=0,c3=0,c4=0;
printf("enter string:");
scanf("%s",s);

for(i=0;s[i];i++)
{
	if(s[i]>='a'&&s[i]<='z')
	c1++;
	else if(s[i]>='A'&&s[i]<='Z')
	c2++;
	else if(s[i]>='0'&&s[i]<='9')
	c3++;
	else
	c4++;
}

printf("small letters    : %d\n",c1);
printf("capital letters  : %d\n",c2);
printf("digits           : %d\n",c3);
printf("special character: %d\n",c4);

}
