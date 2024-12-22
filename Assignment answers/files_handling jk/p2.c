/*2) Write a Program to remove a Specific line from the given text file.*/
#include<stdio.h>
void main(int argc,char **argv)
{
int c1;
printf("Enter the line number for deletation:\n");
scanf("%d",&c1);
if(argc!=2)
{
printf("Usage: ./a.out filename\n");
return;
}
FILE *fp=fopen(argv[1],"r+");
int c=0,i=0;
char ch,s[100];

while((ch=fgetc(fp))!=-1)
{
	if(ch=='\n')
	{
		if(c==c1-1)
			c++;
		else
		{
			s[i]=ch;
			i++;
			c++;
		}
	}
	else if(c!=c1-1)
	{
		s[i]=ch;
		i++;
	}
}
s[i]='\0';
FILE *fd=fopen(argv[1],"w");
i=0;
while(s[i])
{
	fputc(s[i],fd);
	i++;
}
}
