#include<stdio.h>
void main()
{
  int a[20],n,i,t,j,k;
  printf("enter the size of array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the shift time");
  scanf("%d",&k);
  for(i=1;i<=k;i++)
  { 
    t=a[n-1];
    for(j=n-2;j>=0;j--)
    {
      a[j+1]=a[j];
    }
    a[0]=t;
  }
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  
}
