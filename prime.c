#include <stdio.h>
#include<conio.h>
int main()
{
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",num);
    else
        printf("%d is not a prime number.",num);
    
    return 0;
}
