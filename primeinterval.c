#include<stdio.h>
int main()
{
  int n,count,c=0,i,j;
  printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    count=0;
    if(n%i==0)
    { 
      for(j=1;j<=n;j++)
      {
        if(i%j==0)
        {
          count++;
        }
      }
    }
    if(count==2)
      {
        printf("%d ",i);
      }
  
  }
  return 0;
}
