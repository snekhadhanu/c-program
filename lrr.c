#include<stdio.h>
void main()
{
  int L,R,N;
  printf("enter the number");
  scanf("%d",&N);
  printf("enter the intervals");
  scanf("%d%d",&L,&R);
  if(N>L&&N<R)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
