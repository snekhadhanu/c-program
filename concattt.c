#include<stdio.h>
#include<string.h>
void main()
{
  char a[20],b[20];
  printf("enter the string");
  scanf("%s",&a);
  printf("enter the another string");
  scanf("%s",&b);
  printf("%s",strcat(a,b));
}
  
  
