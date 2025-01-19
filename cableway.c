#include<stdio.h>

int r,g,b,i,fc=0;

void checkr(int a){
    if(r>0 || g>0 || b>0)
    {
        r=r-2;
        fc++;
    }
}
void checkg(int a){
    if(r>0 || g>0 || b>0)
    {
        g=g-2;
        fc++;
    }
}
void checkb(int a){
    if(r>0 || g>0 || b>0)
    {
        b=b-2;
        fc++;
    }
}

int main()
{
    
    scanf("%d",&r);
    scanf("%d",&g);
    scanf("%d",&b);

    while(r>0 || g>0 || b>0)
    {
        checkr(r);
        checkg(g);
        checkb(b);

    }
    printf("%d",29+fc);
}