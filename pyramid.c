#include<stdio.h>
int main()
{
int num,i,j,x;
printf("the size of the pyramid: ");
scanf("%d",&num);
for(i=0;i<=num;i++)
{x=num-i;
printf("*\n,x");
for(j=1;j<=(2*i+1);j++)
{printf("%d",j);
}}}
