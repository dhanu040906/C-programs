#include<stdio.h>
int main(){
    char n[10],m[11];
    FILE *input;
    input=fopen("inputfile.txt","r");
    fscanf(input,"%10s",n);
    fscanf(input,"%10s",m);
    printf("n is %s,m is %s",n,m);
    
}