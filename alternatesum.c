#include<stdio.h>
int main()
{
	int t,n,j,i,k,a;
	scanf("%d",&t);
	int finalsum[t];
		for(i=0;i<t;i++)
		{	scanf("%d",&n);
			int num[n];
			for(j=0;j<n;j++)
			{scanf("%d",&num[j]);}
			int sum1=0,sum2=0,sum;
			for(k=0;k<=n-1;k=k+2)
				{sum2+=num[k];}
				for(k=1;k<=n-1;k=k+2)
				{sum1+=num[k];}
				sum=sum2-sum1;
		finalsum[i]=sum;}
		for(a=0;a<t;a++)
		{printf(" %d \n", finalsum[a]);}}
