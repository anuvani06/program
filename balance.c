#include<stdio.h>
int main()
{
   int ac,c1,cb,nc;
   printf("enter amount no:");
   scanf("%d",&ac);
   printf("enter credit limit:");
   scanf("%d",&c1);
   printf("enter current balance:");
scanf("%d",&cb);
nc=c1/2;
printf("your new credit limit is%d",nc);
if(cb>c1)
{
   printf("your current balance exceeds current balance:");
}
else
{
   printf("thr amount has not exceeded your current balance:");
}
return 0;
}