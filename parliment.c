#include<stdio.h>
int main()
{
	int n,a,b,i,j,z=1;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	int seats[a][b];
	if(n<=a*b)
	{
		for(i=0;i<a;i++)
		{
			if(i%2==0)
			{
				for(j=0;j<b;j++)
				{
				 seats[i][j]=z;
					if(z>n)
					{
					 seats[i][j]=0;
					}
						z++;
					}
			}
			
			
			
			
			
			
			else
			{
				for(j=b-1;j>=0;j--)
				{	
				 seats[i][j]=z;
				 
			
					
					if(z>n)
					{
					 seats[i][j]=0;
					}
					z++;
				}
			}
			
			
	}
		
		
		
		
		
		
			for(i=0;i<a;i++)
			{
				for(j=0;j<b;j++)
				{
					printf("%d ",seats[i][j]);
					
				}
				printf("\n");
			}
			 
			
			
			}
		else{
		printf("-1 \n");
	}
}
