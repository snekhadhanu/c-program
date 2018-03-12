#include<stdio.h>
#include<string.h>
int main()
{
  char a[20],temp;
  int i,j=1;
  printf("enter the string");
  scanf("%s",&a);
  i=0;
  j=strlen(a)-1;
  while(i<j)
  {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
  }
  printf("%s",a);
    return 0;
  }
