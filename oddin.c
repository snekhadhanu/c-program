#include<stdio.h>
#include<conio.h>
int main()
{
int i,f,l;
printf("enter the first interval");
scanf("%d",&f);
printf("enter the last interval");
scanf("%d",&l);
for(i=f;i<=l;i++)
{
if(i%2==1)
{
printf("%d is an odd number",i);
}
}
return 0;
}
