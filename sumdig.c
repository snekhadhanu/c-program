#include "stdio.h"
void main()
{
  int n,rem,s=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    s=s+rem;
    n=n/10;
  }
  printf("%d",s);
}
