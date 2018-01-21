#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("enter time in hours and minutes");
    scanf("%d%d",&a,&c);
    printf("enter second time in hours and minutes");
    scanf("%d%d",&b,&d);
    e=a-b;
    f=c-d;
    printf("the difference in time is %d\t%d",e,f);
    
}
