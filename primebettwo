#include<stdio.h>
#include<string.h>
int main()
{
  int f,l,k,i,count=0,c=0;
  printf("enter the intervals");
  scanf("%d%d",&f,&l);
  for(i=f;i<=l;i++)
  {
    for(k=1;k<=i;k++)
    {
    if(i%k==0)
    {
      count++;
    }
    }
    if(count==2)
    {
      c++;
    }
  }
  printf("%d",c);
  return 0;
}
