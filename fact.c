#include<stdio.h>
#include<conio.h>
int main()
{
int n,fact=1,i;
printf("enter any integer");
scaf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of a given number is %d",fact);
return 0;
}
