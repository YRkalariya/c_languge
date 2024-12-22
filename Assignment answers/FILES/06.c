//replac the word with reverse word
#include<stdio.h>
#include<string.h>
void my_strrev(char *);
void my_strrev_1(char *,char *);
////////////MAIN FN///////////////////
void main(int argc,char **argv)
{
	if(argc!=2){
		printf("USAGE: ./06 filename\n");
		return;
	}
	FILE *fp=fopen(argv[1],"r+");
	if(fp==0){
		printf("file not found\n");
		return;
	}
	/*******scanning in string from file****/
	char s[100],ch,tch;
	int i=0,l,count_line=0,m,n,p,q;


	while((ch=fgetc(fp))!=-1)
	{
		s[i++]=ch;
	}
	s[i]='\0';

	i=0;
	p=0;
	while(s[i])
	{
		if((s[i]==' ')||(s[i]=='\n'))
		{	q=i;
		for(m=p,n=q-1;m<n;m++,n--)
			tch=s[m],s[m]=s[n],s[n]=tch;
		p=q+1;
		}
	i++;
	}
rewind(fp);
fputs(s,fp);
}
