#include<stdio.h>
int main()
{
    int n,i,j,maxx;
    scanf("%d",&n);
    int fs[n];

    struct partici{
        char name[20];
        int suc;
        int fail;
        int sa;
        int sb;
        int sc;
        int sd;
        int se;
    }p[n];


    for(i=0;i<n;i++)
    {
        scanf("%s",p[i].name);
        scanf("%d",&p[i].suc);
        scanf("%d",&p[i].fail);
        scanf("%d",&p[i].sa);
        scanf("%d",&p[i].sb);
        scanf("%d",&p[i].sc);
        scanf("%d",&p[i].sd);
        scanf("%d",&p[i].se);
    }

    for(i=0;i<n;i++)
    {
        fs[i]=p[i].sa + p[i].sb + p[i].sc + p[i].sd + p[i].se + p[i].suc*100 - p[i].fail*50;
    }
    maxx=fs[0];
    j=0;
    for(i=0;i<n;i++)
    {
        if(maxx<fs[i])
        {
            maxx=fs[i];
            j=i;
        }
    }
    printf("%s",p[j].name);
}