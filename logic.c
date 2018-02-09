#include<stdio.h>
#include<string.h>
void main()
{
  char a[20],count=0,i,c;
  printf("enter the string");
  scanf("%s",&a);
  strlen(a);
  if(strlen(a)%2==0)
  {
    count=1;
  }
  else
  {
    count=2;
  }
  if(count==1)
  {
    for(i=0;i<strlen(a);i++)
    {
      c=strlen(a)/2;
      if(i==c)
      {
        a[i]='*';
      }
    }
  }
  printf("%s",a);
}





