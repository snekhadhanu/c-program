#include<stdio.h>
void main()
{
  int a[20],b[20],i,j,n,t;
  printf("enter the size of array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(i%2==0)
      {
        printf("%d",a[i+1]);
      }
      else if(i%2!=0)
      {
        printf("%d",a[i-1]);
      }
  }
}
