#include<stdio.h>
int main()
{
   int n,r,s=0;
   printf("enter the number:");
         scanf("%d",&n);
         while(n>0)
         {
         r=r*10;
         n=n/10;
         r=r+(n%10);
         }
         if(n==s)
         printf("it is a palindrome:");
         else
         printf("it is a not palindrome:");
         return 0;
         }