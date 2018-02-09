#include <stdio.h>
 void  main()
{
    int n;
    int t,flag,m;
     
    printf("Enter an integer number: ");
    scanf("%d",&n);
     
    t=n;
    flag=0;
    while(t!=1)
    {
        if(t%2!=0){
            flag=1;
            break;
        }
        t=t/2;
    }
        if(flag==0)
        {
          m=n*2;
          printf("%d",m);
          
        }
        else
        {
          printf("%d is not power of two",n);
        }
    }
