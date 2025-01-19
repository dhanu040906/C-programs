 #include<stdio.h>
    int main() {
        int i,j,z,b=0,x,y;
printf("enter the length of string 1: ");
scanf("%d",&i);
printf("enter the length of string 2: ");
scanf("%d",&j);
char arr1[i], arr2[j];
printf("enter the value of 1st num: ");
scanf("%s",arr1);
printf("enter the value of 2nd num: ");
scanf("%s",arr2);
if (i>=j){
for(x=0,y=0;x < j,y < j;x++,y++) 
{if (arr1[x]==arr2[y]) {b++;
}
else {break;}
}}

else{for(x=0,y=0;x<i,y<i; x++,y++)

{if (arr1[x]==arr2[y]) {b++; }

else {break;}

}}
printf("the length of %d",b);}
