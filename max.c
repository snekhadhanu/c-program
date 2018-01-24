#include<stdio.h>
void main()
{
    int a[20],i,greatest;
    printf("enter 10 elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=greatest;
    for(i=0;i<10;i++)
    {
        if(a[i]>greatest)
        {
            greatest=a[i];
        }
    }
    printf("the largest element is %d",greatest);
}

