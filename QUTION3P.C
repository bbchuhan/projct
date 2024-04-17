#include<stdio.h>
#include<conio.h>
main()
{
int a;
int b;
int c;
int sum;
clrscr();
printf("enter the first angle:-");
scanf("%d",&a);
printf("enter the second angle:-");
scanf("%d",&b);
sum=180 -(a+b);
printf("%d",sum);
getch();
}