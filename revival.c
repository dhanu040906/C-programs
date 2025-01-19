#include<stdio.h>
int main()
{
    int t,i,j,n,m,k,l;
    scanf("%d",&t);
    int strong[t];    
    for(i=0;i<t;i++)
    {
        strong[i]=0;
    }
    for(i=0;i<t;i++)
    {
        int weak=0;
        scanf("%d",&n);
        scanf("%d",&m);
        scanf("%d",&k);

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
            if(num[j]==1)
            {
                weak=0;
            }
            if(weak>=m)
            {

                for(l=j;l<=j+k-1;l++)
                {
                    num[l]=1;
                }
                weak=0;
                strong[i]++;
            }
        }
    }
for(i=0;i<t;i++)
{
    printf("%d\n",strong[i]);
}
}