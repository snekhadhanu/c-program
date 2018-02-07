#include<stdio.h>
int main()
{
  int n,rem,s,i;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    s=s+rem;
    n=n/10;
    if(rem%2!=0)
    {
      printf("%d\t",rem);
    }
  }
  return 0;
}
