#include<stdio.h>
int main()
{
   int n,i,j,temp;
   printf("enter number of luggage:");
   scanf("%d",&n);
   int weight[n];
   printf("enter the weights(in kg) of luggage:\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",& weight[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(weight[i]<weight[j])
         {
            temp=weight[i];
            weight[i]=weight[j];
            weight[j]=temp;
         }
      }
   }
      printf("luggage weight(desending order):\n");
   for(i=0;i<n;i++)
   {
      printf("%d kg\n",weight[i]);
   }
   return 0;
   }


