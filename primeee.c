#include<stdio.h>
void main()
{
  int n,i,flag=0;
  printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  if(n%i==0)
  {
    flag++;
  }
  }
  if(flag==2)
  {
    printf("the number is prime");
  }
  else
  {
    printf("the number is not prime");
  }
}
