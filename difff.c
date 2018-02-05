#include<stdio.h>
void main()
{
  int a,b,c;
  printf("enter the two numbers");
  scanf("%d%d",&a,&b);
  c=a-b;
  if(c%2==0)
  {
    printf("the difference is even");
  }
  else
  {
    printf("the difference is odd");
  }
}
