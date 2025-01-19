#include<stdio.h>
int  main()
{
	int n,i,j;
	printf("enter the size of the pyramid: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{if(i==n || i==1)
		{for(j=0;j<=n;j++)
			{printf("%d",i);}
		}
	else{for(j=0;j<=n;j++)
		{if(j==0 || j==n)
			{printf("%d",n);}
			else{printf("%d",n-1);}}}}}		
