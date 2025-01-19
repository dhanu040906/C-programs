#include<stdio.h>
int main()
{
    int n,i,j;
    printf("the size of the pyramid: ");
    scanf("%d \n",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {int a;
            a=n+1-i;
            printf("%5d",j);
        }
    }
}
