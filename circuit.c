#include<stdio.h>
int main()
{
	int x,i,j;
	scanf("%d",&x);
	int min[x],max[x];
	for(j=0;j<x;j++)
	{
		
		int n,z=0,y=0,countt=0,counto=0;
		scanf("%d",&n);
		int a[2*n];
		for(i=0;i<2*n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<2*n;i++)
		{
			if(a[i]==0)
			{
				counto++;
                printf("counto is %d \n",counto);
			}
			if(a[i]==1)
			{
				countt++;
                printf("countt is %d \n",countt);
			}
		}
		if(countt%2==0)
		{
			min[z]=0;
			z++;
            printf(" min z of %d \n",min[z]);
		}
		else
		{
			min[z]=1;
			z++;
            printf(" min z of %d \n",min[z]);
		}
		if(countt<=n)
		{
			max[y]=countt;
			y++;
            printf(" min y of %d \n",min[y]);
		}
		if(countt>n)
		{
			max[y]=counto;
			y++;
            printf(" min y of %d \n",min[y]);
		}
	}
	for(i=0;i<x;i++)
	{
		printf("%d %d \n",min[i],max[i]);
	}
}