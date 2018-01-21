#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b,i,max,size;
    printf("the size of array is ");
    scanf("%d",&size);
        printf("the %d elements of array is",size);
         for(i=0;i<10;i++)
         {
        scanf("%d",&a[i]);
        a[0]=max;
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("the largest number is %d",max);
    
}
