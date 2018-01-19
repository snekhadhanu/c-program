#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n;
    printf("enter the array size");
    scanf("%d",&n);
    printf("the array elements are");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("the array location of %d element is %d",a[i],i);
    }
}
