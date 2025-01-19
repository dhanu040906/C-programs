#include<stdio.h>
int main()
{int finalcount,n,i,number=1,count=0,pcount=0,j;
	scanf("%d",&n);
	int a[n],fcount[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

    for(i=0;i<n;i++)
    {     
	    if(a[i]>=0)
	    {
		    pcount++;
	    }
	        if(a[i]<0)
	    {
		     count++;

	    }
		                                if(i==n-1 && count<3)
                                 {
                                            finalcount=pcount+count;
                                            printf("%d",finalcount);
                                            printf("%d",pcount);
                                            printf("%d",count);
                                 }

	    if(count>2)
	    {
		    fcount[j]=pcount+2;
		    count=0;
		    pcount=0;
		    number++;
		    j++;
	    }
	

    }
    printf("%d \n",number);
    for(i=0;i<j;i++)
    {
	    printf("%d ",fcount[i]);
    }
    if(count<3 && a[n-1])
    {
	    printf("%d",finalcount);
    }

}

	
