#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[20];
    int i,j;
    printf("enter the string\n");
    scanf("%s",&a);
    printf("enter the second string");
    scanf("%s",&b);
    if(strlen(a)>strlen(b))
    {
        printf("the greater string is %s",a);
    }
    else
    {
        printf("the greater string is %s",b);
    }
    
    
    
}

