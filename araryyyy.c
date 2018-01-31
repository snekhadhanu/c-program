#include<stdio.h>
int main()
{
  int a[10],i,n,high,low;
  printf("enter the total number of elements in an array");
  scanf("%d",&n);
  printf("enter the numbers");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  high=a[0];
  for(i=1;i<n;i++)
  {
      if(high<a[i]) 
      {
        high=a[i];
      }
  }
  low=a[0];
  for(i=1;i<n;i++)
  {
      if(low>a[i]) 
      {
        low=a[i];
      }
  }
    printf("the smallest element is %d\n",low);
    printf("the largest element is %d",high);
    return 0;
    
  }
  
