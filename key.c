#include<stdio.h>
int main()
{
   int i,n,key,count=0;
      printf("enter array size:");
   scanf("%d",&n);
   int arr[n];
   printf("enter elements :\n",n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("enter key to search:");
   scanf("%d",&key);
   printf("key %d found at positions:",key);
   for(i=0;i<n;i++)
   {
      if(arr[i]==key)
      {
         printf("%d",i+1);
         count++;
      }
   }
   if(count==0)
   {
      printf("none");
   }
   printf("key %d occured %d times.\n",key,count);
   return 0;
}