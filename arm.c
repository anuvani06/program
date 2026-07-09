#include<stdio.h>
int main()
{
   int n,r,s=0,x=n;
   printf("enter the number:");
   scanf("%d",&n);
   x=n;
   while(n>0)
   {
      r=n%10;
      n=n/10;
      s=s+(r*r*r);
   }
   if(x==s)
         printf("it is a armstrong number:");
   else
      printf("it is not a armstrong number:");
   return 0;
}