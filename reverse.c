#include<stdio.h>
int main()
{char str[20],i;
	printf("enter tjhe string: ");
	scanf("%s", str);
	for(i=0;i<=20;i++)
	{str[i]=str[19-i];}
	printf("%s",str);}
