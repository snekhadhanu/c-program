#include<stdio.h>
void main()
{
  int a,b,ch;
  printf("enter the choice");
  scanf("%d",&ch);
  printf("enter the values of a and b");
  scanf("%d%d",&a,&b);
  switch(ch)
{
  case 1:
  {
  printf("%d",a*b);
  }
  case 2:
  {
    printf("%d",a%b);
  }
}
}
