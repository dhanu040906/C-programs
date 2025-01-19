#include<stdio.h>
int main()
{
    int n,i,j,k,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,l,h;
        scanf("%d",&a);
        scanf("%d",&l);
        scanf("%d",&h);

        int num[a];
        for(j=0;j<a;j++)
        {
            scanf("%d",&num[j]);
        }
        // type sorting array algorithm here  
for (j = 0; j < a - 1; j++) {
    int swapped = 0; // Flag to check if any swapping happens in this pass
    for (k = 0; k < a - j - 1; k++) { // Adjust the inner loop to bubble largest to the end
        if (num[k] > num[k + 1]) {
            // Swap the adjacent elements
            int temp = num[k];
            num[k] = num[k + 1];
            num[k + 1] = temp;
            swapped = 1; // Set flag to indicate a swap occurred
        }
    }
    // If no elements were swapped in the current pass, the array is already sorted
    if (swapped == 0) {
        break;
    }
}

        f=0;

        for(j=0;j<a-1;j++)
        {
            for(k=j+1;k<a;k++)
            {
                if(l<=num[j]+num[k] && num[j]+num[k]<=h)
                {
                    f++;
                }
                else
                {
                    break;
                }
            }
        }
    }
        printf("%d\n",f);
}
