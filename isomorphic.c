#include<stdio.h>
#include<string.h>
void main()
{
  char a[20],b[20];
  int c=0,i,j,d=0;
  printf("enter the string");
  scanf("%s",&a);
  printf("enter the another string");
  scanf("%s",&b);
  for(i=0;i<strlen(a);i++)
  {
    for(j=0;j<strlen(b);j++)
    {
    if((a[i]==a[i+1])&&(a[j]==a[j+1]))
    {
      c++;
    }
    if((a[i]!=a[i+1])&&(a[j]!=a[j+1]))
    {
      d++;
    }
    }
  }
    if(c!=0||d!=0)
    {
    printf("yes");
    }
    else
    {
      printf("no");
    }
  }
  
  
