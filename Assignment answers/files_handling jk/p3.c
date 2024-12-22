/*3) Write a Program to replace a Specified line in a given file.*/
#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
if(argc!=2)
{
	printf("Usage:./a.out filename\n");
	return;
}
FILE *fp=fopen(argv[1],"r+");
if(fp==0)
{
	printf("FIle is not present:\n");
	return;
}
char new[100],ch,s[1000];
int c=0,c1,length,i=0,j=0;
printf("Enter the string:\n");
scanf("%[^\n]",new);
printf("Enter the line numbe for replacement:\n");
scanf("%d",&c1);
length=strlen(new);
while((ch=fgetc(fp))!=-1)
{
	if(ch=='\n')
	{	
		s[i]=ch;
		c++;
		i++;
	}
	else if(c==c1)
	{
		if(ch=='\n')
		c++;
	}
	else if(c==c1-1)
	{
		for(j=0;new[j];j++,i++)
		s[i]=new[j];
	s[i]='\n';
	c++;
	}
	else
	{
		s[i]=ch;
		i++;
	}
}
FILE *fd=fopen(argv[1],"w");
i=0;
while(s[i])
{
	fputc(s[i],fd);
	i++;
}
}
