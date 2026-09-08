#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int n1,n2;
   printf("enter two numbers:");
   scanf("%d%d",&n1,&n2);
   if(n1>n2)
   {
     printf("n1 is greater");
   }
   else
   {
     printf("n2 is greater");
   }
   getch();
}