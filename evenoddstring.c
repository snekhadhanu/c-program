#include<stdio.h>
#include<string.h>
void main()
{
  int i,j;
  char a[20];
  printf("enter the string");
  scanf("%s",&a);
  for(i=0;i<strlen(a);i++)
  {
      if(i%2==0)
      {
        printf("%c",a[i+1]);
      }
      else if(i%2!=0)
      {
        printf("%c",a[i-1]);
      }
  }
}
