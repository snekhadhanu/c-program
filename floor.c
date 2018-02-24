#include<stdio.h>
#include<math.h>
void main()
{
  float si;
  int p,t,r;
  printf("enter principal,rate and time");
  scanf("%d%d%d",&p,&t,&r);
  si=(p*t*r)/100;
  printf("simple interest=%f",floor(si));
}
  
