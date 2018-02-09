#include<stdio.h>
#include<string.h>
void main()
{
  char a[20],flag=0,i;
  printf("enter the string");
  scanf("%s",&a);
  strlen(a);
  for(i=0;i<strlen(a);i++)
  {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    {
     flag=1;
    }
  }
  if(flag!=0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
