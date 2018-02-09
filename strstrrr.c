#include<stdio.h>
#include<string.h>
void main()
{
  char a[20],k,i,c;
  printf("enter the string");
  scanf("%s",&a);
  c=strlen(a);
  printf("enter the last letter of the string");
  scanf("%d",&k);
  c=k;
      for(i=0;i<c;i++)
      {
        printf("%c",a[i]);
      }
  }

