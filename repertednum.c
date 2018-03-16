#include<stdio.h>
int main()
{
  int a[20],c,n,i,j;
  printf("enter the size of array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    c=0;
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      {
        c++;
      }
    }
    if(c==0)
    {
      printf("%d",a[i]);
    }
  }
  return 0;
}
  
