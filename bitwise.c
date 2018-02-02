#include<stdio.h>
void main()
{
  int a,b;
  printf("enter the two numbers");
  scanf("%d%d",&a,&b);
  printf("\nbefore swapping:a=%d,b=%d",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("\nafter swapping:a=%d,b=%d",a,b);
  
}
