#include<stdio.h>
void main()
{
  int n,sum=0,rem=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    n=n/10;
    sum=rem*rem+sum;
  }
    printf("%d",sum);
}
