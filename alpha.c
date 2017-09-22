#include<stdio.h>
#include<conio.h>
void main()
{
char vc;
printf("enter the character");
scanf("%c",&vc);
if((vc>=65&&vc<=90)||(vc>=97&&vc<=122))
{
printf("the entered character is alphabet");
}
else
{
printf("the entered character is not a alphabet");
}
getch();
}

