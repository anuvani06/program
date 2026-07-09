#include<stdio.h>
int main()
{
  int a;
  printf("1.add book to stock\n");
  printf("2.lend book\n");
  printf("3.return book\n");
  printf("4.book availability enquiry\n");
  printf("5.exit\n");
  printf("enter no 1 to 5:\n");
  scanf("%d",&a);
  if(a==1)
     printf("1.add book");
  else if(a==2)
     printf("2.lend book");
  else if(a==3)
     printf("3.return book");
  else if(a==4)
     printf("4.book availability enquiry");
  else
     printf("5.exit");
  return 0;
}