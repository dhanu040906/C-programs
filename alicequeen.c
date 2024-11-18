#include<stdio.h>
void checkbox_north()
{
    
}
int main()
{
    int x,i,j;
    scanf("%d",&x);
    int n,a,b;
    for(i=0;i<x;i++)
    {
        int u=0,v=0;
        scanf("%d",&n);
        scanf("%d",&a);
        scanf("%d",&b);
        char string[n];
        scanf("%s",string);

        for(j=0;j<n;j++)
        {
            if(string[j]=='N')
            {
                v++;
                // printf("v value after N is %d\n",v);
                            if(u!=0 && v!=0 && (a/u)==(b/v) && a%u==0 && b%v==0 )
                            {
                                printf("YES \n");
                            
                            }
                            else{
                                printf("NO \n");
                            }
            }
            if(string[j]=='S')
            {
                v--;
                // printf("v value after S is %d\n",v);
                            if(u!=0 && v!=0 && (a/u)==(b/v) && a%u==0 && b%v==0 )
                            {
                                printf("YES \n");
                            }
                            else{
                                printf("NO \n");
                            }
            }
            if(string[j]=='E')
            {
                u++;
                // printf("u value after E is %d\n",u);
                            if(u!=0 && v!=0 && (a/u)==(b/v) && a%u==0 && b%v==0 )
                            {
                                printf("YES \n");
                            }
                            else{
                                printf("NO \n");
                            }
            }
            if(string[j]=='W')
            {
                u--;
                // printf("u value after W is %d\n",u);
                            if(u!=0 && v!=0 && (a/u)==(b/v) && a%u==0 && b%v==0 )
                            {
                                printf("YES \n");
                            }
                            else{
                                printf("NO \n");
                            }
            }
        }

        // if(u!=0 && v!=0 && (a/u)==(b/v) && a%u==0 && b%v==0 )
        // {
        //     printf("YES \n");
        // }
        // else{
        //     printf("NO \n");
        // }

    }

}