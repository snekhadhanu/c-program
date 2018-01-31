#include<stdio.h>
int main()
{
  int n,rem,s,i,count=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    s=s+rem;
    n=n/10;
    count++;
  }
  printf("the total no digits is %d",count);
  return 0;
}
