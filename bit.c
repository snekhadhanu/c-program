#include<stdio.h>
void main()
{
  int a=45,b=78;
  printf("Before swapping\nthe value of a=%d,b=%d\n",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("After swapping\nthe value of a=%d,b=%d",a,b);
}
