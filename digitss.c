#include <stdio.h>
#include <math.h>
int main()
{
   int n,digit,remainder;
   scanf("%d",&n);
   digit=n/1000;
   printf("%d\n",digit);
   remainder=n%1000;
   if(remainder<100)
   {
      printf("0\n");
      digit=remainder/10;
      printf("%d\n%d\n",digit,remainder%10);
   }
   else
   {
      digit=remainder/100;
      printf("%d\n",digit);
      remainder=remainder%100;
      digit=remainder/10;
      printf("%d\n",digit);
      printf("%d\n",remainder%10);
  }
 
return 0;
}
