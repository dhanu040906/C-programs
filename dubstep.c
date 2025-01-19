#include<stdio.h>
int main()
{int i,j=0;
	char string[1000],fstring[1000];
	scanf("%s",string);
	for(i=0;i<1000;i++)
	{if(string[i]==87 && string[i+1]==85 && string[i+2]==66)
		{string[i]=32;
			string[i+1]=32;
			string[i+2]=32;}}
	for(i=0;i<1000;i++)
	{if(string[i]!=32)
		{fstring[j]=string[i];
			j++;
		}
		 if(string[i]==32 && string[i-1]!=32)
		 {fstring[j]=32;
			j++;
		}}

	printf("%s",fstring);}
