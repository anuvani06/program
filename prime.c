#include<stdio.h>
int prime(int num);
int main()
{
   int num;
   printf("enter the num");
   scanf("%d",&num);
   if(prime(num))
   {
      printf("%d is prime num",num);
   }
   else
   {
      printf("%d is not a primenum",num);
   }
   return 0;
}
int prime(int num)
{
   int i;
   if(num<=1)
   {
      return 0;
   }
   for(i=2;i<num;i++)
   {
      if(num%i==0)
      {
         return 0;
      }
      return 1;
   }
}