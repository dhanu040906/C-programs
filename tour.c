#include<stdio.h>
void firstday(long long int n,long long int a,long long int b, long long int c,long long int days){
   
    if(n>0)
    {
        n=n-a;
        days++;
    }
        if(n>0)
    {
        n=n-b;
        days++;
    }
        if(n>0)
    {
        n=n-c;
        days++;
    }
        printf("%lld\n",days);
        return;
    
}

int main()
{
    long long int z,i,days,reminder;
    scanf("%lld",&z);
    for(i=0;i<z;i++)
    {
        long long int n,a,b,c;
        scanf("%lld",&n);
        scanf("%lld",&a);
        scanf("%lld",&b);
        scanf("%lld",&c);
        days=3*(n/(a+b+c));
        reminder=n%(a+b+c);
        firstday(reminder,a,b,c,days);
    }

}