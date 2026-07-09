#include<stdio.h>
int main()
{
   int x;
   printf("enter a mark:");
   scanf("%d",&x);
   if(99<x<100)
   printf("good");
   else if(59<x<80)
   printf("averge");
   else if(39<x<60)
   printf("fair");
   else
      printf("fail");
   return 0;
}