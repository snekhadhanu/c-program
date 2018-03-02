#include<stdio.h>
#include<string.h>
void main()
{
 int a,b,max;
 printf("enter the two numbers");
 scanf("%d%d",&a,&b);
 max=a>b?a:b;
 while(1)
 {
   if(max%a==0&&max%b==0)
   {
     printf("%d",max);
     break;
   }
   ++max;
 }
}
