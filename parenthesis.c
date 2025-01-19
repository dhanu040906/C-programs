#include<stdio.h>
int main()
{
	 char paren[1000];
	 int count[1000],i, j=0;
	 
	 scanf("%s",paren);
	 
	  	count[0]=0;
	for(i=0;i<1000;i++)
	 {
	   if(paren[i]=='(')
	  {
	  	count[i+1]=count[i]+1;
		j++;
	  }	
	  if(paren[i]==')')
	  {
	  	count[i+1]=count[i]-1;
	  	j++;
	  
	  }
	}
		 printf("%d \n",j);
		for(i=0;i<j-2;i++)
		{
			printf("%d",count[i]);
		}
}
