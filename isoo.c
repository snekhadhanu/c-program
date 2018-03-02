#include<stdio.h>
#include<string.h>
void main()
{
 char a[20];
 int i,j,f=0,b;
 printf("enter the string");
 scanf("%s",&a);
 b=strlen(a);
 for(i=0;i<b;i++)
 {
   for(j=i+1;j<b;j++)
   {
   if(a[i]==a[j])
   {
    f++;
   }
   }
 }
 if(f==0)
 {
   printf("yes");
 }
 else
 {
   printf("no");
 }
 }
