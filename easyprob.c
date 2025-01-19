#include<stdio.h>
int main(){
    int n,i,j,k,target,finalans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        finalans=0;
        scanf("%d",&target);
        for(j=1;j<target;j++)
        {
            for(k=j;k<target;k++)
            {
                if((k+j)==target && k!=j)
                {
                    finalans=finalans+2;
                }
                if((k+j)==target && k==j)
                {
                    finalans++;
                }
            }
        }
        printf("%d\n",finalans);
    }
}