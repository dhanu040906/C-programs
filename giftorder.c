#include<stdio.h>
int result(int array[],int size){
    int maxx,i,j,fmaxx;
    maxx=-1;
    for(i=0;i<size;i++)
    {
        printf(" received val %d\n",array[i]);
        for(j=0;j<size;j++)
        {
            fmaxx=array[j]-array[i]-(j-i);
            if(fmaxx>maxx)
            {
                maxx=fmaxx;
            }
        }
    }
    return maxx;
}
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    int ffmaxx[n];
    for(i=0;i<n;i++)
    {
        int num,q;
        scanf("%d",&num);
        scanf("%d",&q);

        int size[num],change[q],csize[q];
        for(j=0;j<num;j++)
        {

            scanf("%d",&size[j]);
        }
        for(k=0;k<(q);k++)
        {

            scanf("%d",&change[k]);
            scanf("%d",&csize[k]);

        }
       
            printf("%d\n",result(size,num));
        for(j=0;j<q;j++)
        {
            int check;
            size[change[j]-1]=csize[j];
            check = result(size,num);
            if(check!=-1){
            printf("%d\n",result(size,num));}
            else{printf("0");}
        }
       
        

    }

}