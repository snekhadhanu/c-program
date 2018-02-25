#include<stdio.h>
void main()
{
  int a[20],i,j,temp,n;
  printf("enter the size of array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
    }
  }
  for(i=0;i<n;i++)
  {
    a[2]=a[3];
    a[3]=a[2];
  printf("%d\t",a[i]);
}
printf("\n%d",a[n-1]);
}
