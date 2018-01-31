#include <stdio.h>
 
int main()
{
    int n;
    int t,flag;
     
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
        printf("%d is a number that is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
      
    return 0;
}
