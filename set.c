#include<stdio.h>
int main()
{
    int n,i,y;
    scanf("%d",&n);
    int z=0;
    unsigned long long  int intc[n],l[n],r[n],k[n];
    for(i=0;i<n;i++){
        scanf("%llu",&l[i]);
        scanf("%llu",&r[i]);
        scanf("%llu",&k[i]);
        intc[i]=0;
    }
    for(i=0;i<n;i++)
    {
        int fcount=1;
        int maxx=0,j;

        for(j=l[i];j<=r[i];j++)
        {
            // for(y=l[i];y<=r[i];y++)
            // {
            //     if(y%j==0)
            //     {
            //         maxx++;
            //     }
            // }
            if(j*k[i]<=r[i])
            {
                intc[z]=fcount++;
            }

        }
        z++;

    }
    for(i=0;i<z;i++)
    {
        printf("%llu \n",intc[i]);
    }
}