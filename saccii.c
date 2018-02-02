#include<stdio.h>
void main()
{
  char a[20],i,count=0;
  printf("enter the string");
  scanf("%s",&a);
  strlen(a);
  for(i=0;i<strlen(a);i++)
  {
    if((48<=a[i]<=57)&&(97<=a[i]<=122))
    {
      count++;
    }
  }
  if(count!=0)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
}
