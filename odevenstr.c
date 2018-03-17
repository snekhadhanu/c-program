#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int i;
printf("enter the string");
scanf("%[^\n]s",a);
for(i=0; a[i]!='\0'; i++)
	{
		if(i%2==0)
		{
		    printf("%c",a[i]);
		}
	}
	printf(" ");
	for(i=0; a[i]!='\0'; i++)
	{
		if(i%2!=0)
		{
		    printf("%c",a[i]);
		}
	}
	return 0;
	}
