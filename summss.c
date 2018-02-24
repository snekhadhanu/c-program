#include<stdio.h>
void main()
{
  int i,n,a[20],sum=0;
  printf("enter the total no of numbers");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  printf("%d",sum);
}
