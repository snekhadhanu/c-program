#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i,m;
    printf("enter the string\n");
    scanf("%s",&a);
    printf("enter the no of times u need to repeat ur string");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("%s",a);
    }
return 0;
    
}

