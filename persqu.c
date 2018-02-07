#include<stdio.h>
void main()
{
  int n,o,p;
  printf("enter the numbers");
  scanf("%d%d",&n,&o);
  p=n*o;
  printf("%d",p);
  if(n==o)
  {
    printf("\nit is a perfect square");
  }
  else
  {
    printf("\nit is not a perfect square");
  }
}
  
