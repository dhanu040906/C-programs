#include<stdio.h>
int main()
{
    int t,i,j,n,m,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int weak=0,strong=0;
        scanf("%d %d %d",&n,&m,&k);
        int num[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[j]);
        }
        for(j=0;j<n;j++)
        {
            if(num[j]==0)
            {
                weak++;
            }
            if(weak>=m)
            {
                num[j]=1;
                num[j+1]=1;
                weak=0;
                strong++;
            }
        }
        printf("%d",strong);
    }

}