#include<stdio.h>
void main()
{
  int n,k,i,a[20],count=0;
  printf("enter the n and k values");
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(k==a[i])
    {
      count++;
    }
  }
  if(count!=0)
  {
    printf("%d",k);
  }
}
