#include<stdio.h>
int main(void)
{
	int n,m,i;
	scanf("%d %d",&n,&m);
	for(i=2;i<=m;i++)
	{
		if(n%i==0 && m%i==0)
		{
			printf("%d",i);
			break;
		}
	}
return 0;
}
© 2018 GitHub, In
