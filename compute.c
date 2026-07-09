#include<stdio.h>
int computepower(int base,int exp);
int main()
{
   int base,exp,res;
   printf("enter the base value");
   scanf("%d",&base);
   printf("enter exp");
   scanf("%d",&exp);
   res=computepower(base,exp);
   printf("%d to the power of %d is %d",base,exp,res);
   return 0;
}
int computepower(int base,int exp)
{
   int ans=1,i;
   for(i=1;i<=exp;i++)
   {
      ans=ans*base;
   }
   return ans;
}