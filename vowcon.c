#include<stdio.h>
#include<conio.h>
int main()
{
char vc;
printf("enter the character");
scanf("%c",&vc);
if(vc=='a'||vc=='e'||vc=='i'||vc=='o'||vc=='u'||vc=='A'||vc=='E'||vc=='I'||vc=='O'||vc=='U')
{
printf("the entered character is vowel");
}
else
{
printf("the entered character is consonant");
}
return 0;
}
