//merge two lines from diff files and store in new file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("usge: ./a.out filename fname\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}
int l1,l2,l,i=0;
char ch;
fseek(fp,0,SEEK_END);
l1=ftell(fp);

fp=fopen(argv[2],"r");
fseek(fp,0,SEEK_END);
l2=ftell(fp);

l=l1+l2;

char s[l];

fp=fopen(argv[1],"r");
while((ch=fgetc(fp))!=-1)
s[i++]=ch;
i--;
fp=fopen(argv[2],"r");
while((ch=fgetc(fp))!=-1)
s[i++]=ch;
i--;
s[i]='\0';

fp=fopen(argv[3],"w");
for(i=0;s[i];i++)
fputc(s[i],fp);
}
