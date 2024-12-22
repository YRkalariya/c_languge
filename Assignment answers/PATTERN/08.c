#include<stdio.h>
void main()
{
        int i,j,k,m,n,o,diff;

        for(i=1;i<=5;i++)
        {
                for(j=1,m=i,diff=5;j<=i;j++,diff--)
                {
                        if(j==1)
                        printf("%d ",i);

                        else
                        printf("%d ",m=m+diff);


                }
                printf("\n\a");
        }
}
