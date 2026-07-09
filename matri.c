#include<stdio.h>
int main()
{
   int a[3][3],b[3][3],c[3][3];
  int i,j,m1,m2,n1,n2;
  printf("enter the no.of rows,cols of matrix a:");
  scanf("%d %d",&m1,&n1);
  printf("enter the no.of rows,cols of matrix b:");
  scanf("%d %d",&m2,&n2);
  printf("enter the elements of matrix a");
  for(i=0;i<m1;i++)
   {
      for(j=0;j<n1;j++)
{
         scanf("%d",&a[i][j]);
      }
   }
printf("enter the elements of matrix b");
for(i=0;i<m2;i++)
         {
            for(j=0;j<n2;j++)
           {
                  scanf("%d",&b[i][j]);
      }
   }
   for(i=0;i<m1;i++)
   {
      for(j=0;j<n1;j++)
      {
        c[i][j]=a[i][j]+b[i][j];
      }
   }
printf("the sum of matrix is:\n");
for(i=0;i<m1;i++)
{
   for(j=0;j<n1;j++)
   {
     printf("%d\t",c[i][j]);
   }
   printf("\n");
}
   for(i=0;i<m2;i++)
{
   for(j=0;j<n2;j++)
   {
   c[i][j]=a[i][j]-b[i][j];
   }
   }
   printf("the sub of matrix a-b is :\n");
   for(i=0;i<m2;i++)
   {
      for(j=0;j<n2;j++)
      {
         printf("%d\t",c[i][j]);
               }
               printf("\n");
                 }
   return 0;
}