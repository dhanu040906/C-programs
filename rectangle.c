#include<stdio.h>
int main()
{
    int n,i,j;
        scanf("%d",&n);
        int test,maxw,maxh;
        for(i=0;i<n;i++)
        {
                scanf("%d",&test);
                int width[test],height[test];
 
 
                for(j=0;j<test;j++){
                        scanf("%d",&width[j]);
                        scanf("%d",&height[j]);
                }
 
 
 
 
                maxw=width[0];
                maxh=height[0];
                for(j=1;j<test;j++)
                {if(maxw<width[j])
                {
                    maxw=width[j];
                }
                if(maxh<height[j])
                {
                    maxh=height[j];
                }
                }
                printf("%d \n",2*(maxw+maxh));
        }
 

 
}
