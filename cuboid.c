#include<stdio.h>
void main()
{
  int l,b,h,t,v,s;
  printf("enter the length breadth and height of cuboid");
  scanf("%d%d%d",&l,&b,&h);
  t=(l*b)+(b*h)+(h*l);
  s=2*t;
  v=l*b*h;
  printf("%d\t",s);
  printf("%d",v);
}
