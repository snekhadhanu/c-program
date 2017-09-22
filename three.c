#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,n3;
printf("enter the values of n1,n2 and n3");
scanf("%d,%d",&n1,&n2,&n3);
if(n1>n2)
{
if(n1>n3)
{
printf("n1 is greater");
}
else
{
printf("n3 is greater");
}
}
elseif(n2>n3)
{
printf("n2 is greater");
}
else
{
printf("n3 is greater");
}
return 0;
}
