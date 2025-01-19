#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int num[n],je[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        je[i]=0;
    }
    for(i=0;i<n;i++)
    {
        int j=0;
        while(num[i]%2!=0)
        {
            int k=pow(2,j);
            num[i]=num[i]/k;
            je[i]=j;
            j++;
        }
    }
    int max=je[0];
    for(i=0;i<n;i++)
    {
        if(max<je[i])
        {
            max=je[i];
        }
    }
    printf("%f",pow(2,max));
    for(i=0;i<n;i++)
    {
        if
    }
}