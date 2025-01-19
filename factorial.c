#include<stdio.h>
int factorial(int n);
int main(){int i=5,z;
	z=factorial(i);
	printf("%d",z);}

int factorial(int n)
{ int i,fr=1;
	if(n!=0){
	for(i=1;i<=n;i++)
	{fr*=i;}} 
	else{fr=1;}
	return fr;}

