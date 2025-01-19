
#include<stdio.h>
int main()
{int n,i,j,k=0;
        scanf("%d",&n);
        int test[n],maxw[n],maxh[n];
        for(i=0;i<n;i++)
        {
                scanf("%d",&test[i]);
                int width[test[i]],height[test[i]];


                for(j=0;j<test[i];j++){
                        scanf("%d",&width[j]);
                        scanf("%d",&height[j]);
                }




                maxw[k]=width[0];
                maxh[k]=height[0];
                for(i=1;i<test[i];i++)
                {if(maxw[k]<width[i])
                        {
                                maxw[k]=width[i];
                        }

                        if(maxw[k]<width[i])
                        {
                                maxw[k]=width[i];
                        }
                }
                k++;
        }


                for(i=0;i<n;i++)
                {
                        printf("%d \n",2*(maxw[i]+maxh[j]));
                }

}
