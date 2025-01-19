#include<stdio.h>
int main()
{int n,z,k,i,min,max,maxf,j;
	scanf("%d",&n);
	

	for(k=0;k<n;k++)
	{
		scanf("%d",&z);
	if(z!=1){		
		int a[z],final[z];
	for(i=0;i<z;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<z;i++)
	{
		for(j=0;j<i;j++)
		{if(a[j]<=a[j+1])
			{min=a[j];}
			else{min=a[j+1];}
		}
		for(j=0;j<i;j++)
                {if(a[j]<=a[j+1])
                        {max=a[j+1];}
                        else{max=a[j];}
                }
		final[i]=max-min;
	}
	for(i=0;i<z;i++)
	{if(final[i]<=final[i+1])
		{maxf=final[i+1];}
			else{maxf=final[i];}
		
	}
printf("%d \n",maxf);		
}
else{
	int i;
	scanf("%d",&i);
	printf("0 \n");}}
}

