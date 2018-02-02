#include<stdio.h>
void main()
{
  int a=0,b=1,i,c=0,n;
  printf("enter the length of series");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("%d",a);
    c=a+b;
    a=b;
    b=c;
  
  
  }
  
}
