#include<stdio.h>
#include<conio.h>
int main()
{
int N,sum=0,num;
print("enter the value of N");
scanf("%d",&N);
for(num=1;num<=N;num++)
{
sum=sum+num;
printf("sum of N is %d",sum);
return 0;
}
