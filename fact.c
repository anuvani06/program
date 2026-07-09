#include<stdio.h>
int main()
{
   int n,i=1,f=1;
   printf("enter any number:");
      scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      f=f*i;
   }
   printf("factorial of:%d",f);
   return 0;
}