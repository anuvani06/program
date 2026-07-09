#include<stdio.h>
int main()
{
   int n,r,s=0;
   printf("enter the number:");
   scanf("%d",&n);
         while(s>0);
         {
         r=n%10;
         n=n/10;
         s=s+r;
         }
         printf("sum of digit is %d",s);
         return 0;
         }