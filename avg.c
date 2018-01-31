#include<stdio.h>
void main()
{
  int a[10],i,avg,sum=0,n;
  printf("enter the total number of digits");
  scanf("%d",&n);
  printf("enter the numbers");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  sum=sum+a[i];
  }
  avg=sum/n;
  printf("the average of given numbers is %d",avg);
}
  
