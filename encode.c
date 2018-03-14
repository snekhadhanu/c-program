#include<stdio.h>
#include<string.h>
void main()
{
  char a[20];
  int i;
  printf("enter the string");
  scanf("%s",&a);
  for(i=0;i<strlen(a);i++)
  {
    a[i]=a[i]+3;
  }
  printf("%s",a);
}
