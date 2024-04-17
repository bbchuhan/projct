#include<stdio.h>
#include<conio.h>
main()
{
int c;
float a=1.8;
float f;
clrscr();
printf("enter valu of calsius");
scanf("%d",&c);
f=(c*a)+32;
printf("%.1f",f);
getch();
}