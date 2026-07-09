#include<stdio.h>
void swap(int*a,int*b);
void swap(int*a,int*b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
int main()
{
   int num1,num2;
   printf("enter the first number:");
   scanf("%d",&num1);
   printf("enter the second number:");
   scanf("%d",&num2);
   printf("\nbefore swapping :%d %d",num1,num2);
   swap(&num1,&num2);
   printf("\nafter swapping:%d %d",num1,num2);
   return 0;
}