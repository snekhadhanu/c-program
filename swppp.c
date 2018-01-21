#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,t;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("after swapping\n");
    printf("the value of a=%d and b=%d",a,b);
    
}
