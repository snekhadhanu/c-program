#include<stdio.h>
#include<string.h>
void main()
{
  char a[20];
  int i,j;
  printf("enter the string");
  scanf("%s",&a);
  for(i=strlen(a);i>=0;i--)
  {
    if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
    {
   printf("%c",a[i]);
    }
   
  }
}
