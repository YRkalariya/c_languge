//capital first letter of every word
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usge: ./a.out filename\n");
		return;
	}
	FILE *fp,*l;
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file not found\n");
		return;
	}
	char s[100],ch;
	int len,i=0;
	while((ch=fgetc(fp))!=-1)
	s[i++]=ch;
	s[i]='\0';
			if(s[0]>='a'&&s[0]<='z')
				s[0]=s[0]&~(1<<5);

		for(i=0;s[i];i++)
		{
			if((s[i]==' ')||(s[i]=='\n'))
				if(s[i+1]>='a'&&s[i+1]<='z')
					s[i+1]=s[i+1]&~(1<<5);
/*			
			if((s[i]==' ')||(s[i]=='\n'))			//for making last charcter capital
				if(s[i-1]>='a'&&s[i-1]<='z')
					s[i-1]=s[i-1]&~(1<<5);
*/
		}

rewind(fp);
for(i=0;s[i];i++)
fputc(s[i],fp);
/*	while(fgets(s,50,fp))
	{
		for(i=0;s[i];i++)
		{
			s[0]=s[0]|1<<5;
			if((s[i]==' ')||(s[i]=='\n'))
				s[i+1]=s[i+1]|1<<5;
			fputs(s,fp);
		}

*/

/*while((ch=fgetc(fp))!=-1)
{
	if((ch==' ')||(ch=='\n'))
	ch=ch|1<<5;
	fseek(fp,-1,SEEK_CUR);
	fputc(ch,fp);
}*/
}
