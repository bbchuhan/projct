#include<stdio.h>
#include<conio.h>
main()
{
int bs;
int hra;
int da;
int ta;
int sum;
hra=(hra/bs)*100;
da=(da/bs)*100;
ta=(ta/bs)*100;
clrscr();
printf("enter the value ofbs:-");
scanf("%d",&bs);
printf("enter the valu of hra:-");
scanf("%d",&hra);
printf("enter the value of da:-");
scanf("%d",&da);
printf("enter the value of ta:-");
scanf("%d",&ta);
sum=bs+hra+ta+da;
printf("%d",sum);
getch();
}