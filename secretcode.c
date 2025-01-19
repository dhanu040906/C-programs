#include<stdio.h>
int hcf(int a,int b)
{
    int hcf;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
            hcf=b;
        }
        if(b>a)
        {
            b=b-a;
            hcf=a;
        }
    }
            if(a==b)
        {
            hcf=a;
        }
    return hcf;

}


int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n],final[n],j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
    {
        j=hcf(a[i],b[i]);
        final[i]=(a[i]*b[i])/j;
    }
    for(i=0;i<n;i++)
    {
        printf("%d \n",final[i]);
    }
}