#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c,i,l;
    printf("the length of fibonacci series is");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        
    }
    }
    
