#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
char ch,s[200],Oword[100],Nword[100],*p;
int diff,i,j,k,q,m,n,o,x,y,z,r,t;
FILE *fp=fopen(argv[1],"r+");

if(fp==0){
printf("file not found..\n");
return;
}
printf("enter the word you want to replace: ");
scanf("%s",Oword);
printf("enter new word: ");
scanf("%s",Nword);

i=0;
while((ch=fgetc(fp))!=-1)
	s[i++]=ch;
	s[i]='\0';

	o=strlen(Oword);
	n=strlen(Nword);
	m=strlen(s);
	diff=o-n;
//printf("strlen of old word=%d\n strlen of old word=%d\n strlen of main string=%d\n",o,n,m);
	p=strstr(s,Oword);
	r=strlen(p);
//printf("string lenth from pointer=%d\n",r);
int newdiff;
newdiff=m-r;		//length before pointer
while(p){
for(i=0;i<o;i++)		//deleteing old word
for(j=0;p[j];j++)
p[j]=p[j+1];

for(i=0;p[i];i++);		//making space for new wrd
for(i=i;i>=0;i--)
p[i+n]=p[i];

for(i=0;Nword[i];i++)		//putting new word
p[i]=Nword[i];
p=strstr(s,Oword);
}
printf("%s",s);
fp=fopen(argv[1],"w");
fputs(s,fp);
}
