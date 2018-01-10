#include<stdio.h>
void main()
{
int a[]={1,2,3,4,5};
int n=5;
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[i]>a[j+1])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
n=(n+1)/2-1;
printf("median=%d",a[n]);
return 0;
}
