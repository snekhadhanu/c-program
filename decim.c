#include<stdio.h>
void main()
{
  float N;
  int n,d,e;
  printf("enter the number");
  scanf("%f",&N);
  printf("enter the integer and decimal part");
  scanf("%d%d",&n,&d);
  if(d>=5)
  {
   e=N+1;
  }
  printf("the round off value is %d",e);
}
