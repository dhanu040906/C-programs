#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int add,side;
        scanf("%d",&add);
        scanf("%d",&side);
        int x[add],y[add];
        int fx=side,fy=side;
        for(j=0;j<add;j++)
        {
            scanf("%d",&x[j]);
            scanf("%d",&y[j]);
        }
        for(j=1;j<add;j++)
        {
            fx+=x[j];
            fy+=y[j];
        }
        printf("%d\n",2*(fx+fy));
    }
}