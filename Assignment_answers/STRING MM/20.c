//  tommorow is sunday

#include<stdio.h>
#include<string.h>
void main()
{
char m[50],s[50],r[40],*p;
int x,y,z,i,j,k;
printf("enter sentence:");
scanf("%[^\n]",m);
printf("enter word which you want to remove:");
scanf("%s",s);
printf("enter word you want to replace:");
scanf("%s",r);

for(x=0;m[x];x++);//sizeof m  X
for(y=0;s[y];y++);//sizeof s  Y
for(z=0;r[z];z++);//sizeof r  Z

p=strstr(m,s);

for(i=0;m[i];i++)
p[i]=p[i+y];
p[i+y]='\0';

//printf("%s\n",m);  /////////////

for(i=0;m[i];i++);
for(i=i;i>=0;i--)
p[i+z]=p[i];

//printf("%s",m);  /////////////

for(i=0;r[i];i++)
p[i]=r[i];


printf("%s",m); 



}
