#include<stdio.h>
#include<string.h>
int main()
{
  char a[20],b[20];
  int i,j,count=0;
  printf("enter the first  string");
  scanf("%s",&a);
  printf("enter the second string");
  scanf("%S",&b);
  for(i=0;i<strlen(a);i++)
  {
    for(j=0;j<strlen(b);j++)
    {
      if(a[i]!=a[j])
      {
        count++;
      }
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
