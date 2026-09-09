#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int num;
   printf("enter one number:");
   scanf("%d",&num);
   if(num>0)
   {
     printf("%d number is positive");
   }
   else if(num<0)
   {
     printf("%d number is negative");
   }
   else
   {
     printf("number is zero");
   }
   getch();
}