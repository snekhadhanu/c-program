#include<stdio.h>
void main()
{
  int N,i,a,b;
  printf("enter the number");
  scanf("%d",&N);
  for(i=2;i<=N;i++)  
  {
    a=N/i;
    b=N%i;
   if(b==0)
   {
     printf("%d\t",a);
     break;
   }
   else if(b!=0)
  {
    printf("%d\t",N);
    break;
  }
  }
}
