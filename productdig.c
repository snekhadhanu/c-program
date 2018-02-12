#include<stdio.h>
void main()
{
  int rem=1,s=1,n;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    s=s*rem;
    n=n/10;
  }
  printf("the product of digits is %d",s);
}
