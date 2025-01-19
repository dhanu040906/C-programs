#include<stdio.h>
int main()
{  int x;
   int* ptr;
   ptr=&x
   *ptr = 0;
   printf("%d",x);
   printf("%d",*ptr);
}
