#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(year%4==0)
{
printf("it is a leap year");
}
else
{
printf("it is not a leap year");
}
getch();
}
