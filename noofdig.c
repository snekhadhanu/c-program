#include<stdio.h>
void main()
{
  int sum=0,rem=0,n,count=0;
  printf("enter the integer");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    sum=rem+sum;  
    n=n/10;
    count++;
  }
  printf("%d",count);
}
