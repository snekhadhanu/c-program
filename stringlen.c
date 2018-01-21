#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20];
    int i,l,count=0;
    printf("enter the string length");
    scanf("%d",&l);
    printf("enter the string");
    scanf(" %s",&a[i]);
    if(a[i]!='\0')
    {
        for(i=0;i<l;i++)
        {
            count++;
        }
    }
    printf("the total characters in the string is %d",count);
}
