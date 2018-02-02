#include<stdio.h>
void main()
{
  int a[20],i,n,max;
  printf("enter the number of digits in array");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
    }
    
  }
  printf("the largest element is %d",max);
}
