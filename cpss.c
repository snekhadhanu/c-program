#include<stdio.h>
#include<string.h>
void main()
{
    char b[20];
    int i;
	printf("Enter a string: ");
	scanf("%[^\n]s",b); 
	for(i=0; b[i]!='\0'; i++)
	{
		if(i==0)
		{
			if((b[i]>='a' && b[i]<='z'))
				b[i]=b[i]-32; 
			continue; 
		}
		if(b[i]==' ')
		{
			++i;
			if(b[i]>='a' && b[i]<='z')
			{
				b[i]=b[i]-32; 
				continue; 
			}
		}
		else
		{
			if(b[i]>='A' && b[i]<='Z')
				b[i]=b[i]+32; 
		}
	}
	
	printf(" %s\n",b);
	
	return 0;
  }
