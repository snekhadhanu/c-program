#include<stdio.h>
#include<string.h>
void main()
{
  char a[20],i,count=0;
  printf("enter the string");
  scanf("%s",&a); 
  strlen(a);
  for(i=0;i<strlen(a);i++)
  {
    if(a[i]=='0'||a[i]=='1')
    {
      count=1;
    }
  }
  if(count==1)
  {
  printf("yes");
  }
  else
  {
    printf("no");
  }
}
