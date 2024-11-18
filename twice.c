#include<stdio.h>
int checking(int x ,int y,int testcase[],int size){
    int i,reva=1;
    for(i=0;i<size;i++)
    {
        if(x==testcase[i] || y==testcase[i])
        {
            reva=0;
            break;
        }
    }
    return reva;
}


int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int test[n],fcount[n];
    for(i=0;i<n;i++)
    {
        int count=0;
        scanf("%d",&test[i]);
        int num[test[i]],testcase[test[i]];
        for(j=0;j<test[i];j++)
        {
            scanf("%d",&num[j]);
            testcase[j]=-1;
        }
        int z=0;

        for(j=0;j<test[i];j++)
        {
            for(k=j;k<test[i];k++)
            {
                if(num[j]==num[k] && j!=k && checking(j,k,testcase,test[i]))
                {
                    count++;
                    testcase[z]=j;
                    testcase[z+1]=k;
                    z+=2;
                    break;
                }
            }
        }
        fcount[i]=count;
    }
    for(i=0;i<n;i++)
    {
        printf("%d \n",fcount[i]);
    }
    
}