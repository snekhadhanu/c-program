#include<stdio.h>
#include<conio.h>
int main()
{
int num,rev=0,rem,t;
printf("enter the number");
scanf("%d",&num);
t=num;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(t==rev)
{
printf("%d is palindrome",t);
}
else
{
printf("%d is not palindrome",t);
}
return 0;
}
