#include<stdio.h>
int main(){
    int n,i,j,k,l,maxx,fi,fj,fk,xorij,xorki,xorkj;
    scanf("%d",&n);
    int lower,upper;
    for(l=0;l<n;l++)
    {
        maxx=0;
        scanf("%d",&lower);
        scanf("%d",&upper);
            for(i=lower;i<=upper-2;i++)
    {
        for(j=i+1;j<=upper-1;j++)
        {
            xorij=i^j;
            for(k=j+1;k<=upper;k++)
            {
                xorkj=j^k;
                xorki=i^k;

                if(maxx<(xorij+xorki+xorkj))
                {
                    maxx=xorij+xorki+xorkj;
                    fi=i;
                    fj=j;
                    fk=k;
                }
            }
        }
    }
    printf("%d %d %d\n",fk,fj,fi);
    }
}