#include<stdio.h>
void main()
{
int A,B,C,t,s,t1;
printf("enter the values of a,d,n");
scanf("%d%d%d",&A,&B,&C);
t=A+(C-1)*B;
s=C/2;
t1=s*(A+t);
printf("%d",t1);
}
