#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,count=0,c;
    printf("enter the string");
    gets(a);
    c=strlen(a);
    for(i=0;i<=c;i++)
    {
    if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='9'||a[i]=='0')
    {
        count=count+1;
    }
    }
    printf("the total no of numeric characters in string is %d",count);
}
