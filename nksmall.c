#include<stdio.h>
void main()
{
  int n,k,i,a[20];
  printf("enter the n and k values");
  scanf("%d%d",&n,&k);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++)
  {
    if(i==k)
    {
        printf("%d",a[i]);
    }
  }
}
