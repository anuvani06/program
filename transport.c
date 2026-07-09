#include<stdio.h>
int main()
{
   int m,n,i,j;
   printf("enter rows(m) and columns(n):");
   scanf("%d%d",&m,&n);
   int matrix[m][n];
   printf("enter matrix elements:\n");
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
      scanf("%d",&matrix[i][j]);
   }
}
printf("original matrix:\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
      printf("%d",matrix[i][j]);
   }
      printf("\n");
}
printf("transpose:\n");
for(j=0;j<n;j++)
{
   for(i=0;i<n;i++)
   {
      printf("%d",matrix[i][j]);
   }
   printf("\n");
   }
   return 0;
}


