#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,count=0,c;
    printf("enter the string");
    gets(a);
    c=strlen(a);
    for(i=0;i<=c;i++)
    {
    if(a[i]==' ')
    {
        count=count+1;
    }
    }
    printf("the total no of space is %d",count);
}
