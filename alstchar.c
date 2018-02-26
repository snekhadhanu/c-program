#include<stdio.h>
#include<string.h>
void main()
{
  char a[20];
  int n122,i;
  printf("enter the string");
  scanf("%s",&a);
  printf("enter the last nnumber of characters u want to print");
  scanf("%d",&n);
  for(i=strlen(a);i>=1;i--)
  {
  if(i==n&&n!=0)
  {
    printf("%c",a[i]);
  }
  n--;
  }
}
