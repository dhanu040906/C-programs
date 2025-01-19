#include<stdio.h>
int main ()
{int n,k,i,count=0;
	scanf("%d",&n);
	scanf("%d",&k);
	int marks[n];
	for(i=0;i<n;i++)
	{scanf("%d",&marks[i]);}
	for(i=0;i<n;i++)
	{if(marks[i]>=marks[k] && marks[i]!=0 )
		{count++;}}
	printf("%d",count);}
