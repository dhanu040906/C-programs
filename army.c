#include<stdio.h>
int main()
{int a=1,b=1,n,i;
	scanf("%d",&n);
	int temp[n];
	if(n>1)
	{for(i=0;i<n;i++)
	{temp[i+1]=a+b;
		a=b;
		b=temp[i+1];}
	printf("%d",temp[n-1]);}
	else{printf("1");};
}
