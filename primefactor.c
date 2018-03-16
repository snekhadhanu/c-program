#include<stdio.h>
int main()
{
  int f,l,k,i,count,c;
  printf("enter the intervals");
  scanf("%d%d",&f,&l);
  for(i=f;i<=l;i++)
  { 
      count=0;
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
