#include<stdio.h>
#include<conio.h>
void main()
{
   int a[5],i,sum=0;
   clrscr();
   for(i=0;i<5;i++)
   {
   printf("enter array element:");
   scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
     sum=sum+a[i];
   }
     printf("add=%d",sum);
  getch();
}
