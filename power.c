#include <stdio.h>
#include<conio.h>
int main()
{
    int base, expo,result=1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &expo);
    while (expo!= 0)
    {
        result *= base;
        --expo;
    }
    printf("Answer = %d", result);
    return 0;
    }
