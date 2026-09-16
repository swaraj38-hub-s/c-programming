#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,s;
    clrscr();
    for(i=0;i<5;i++)
    {
       printf("enter elements:");
       scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
       if(a[i]<s)
       {
	  s=a[i];
       }
    }
    printf("smallest number=%d",s);
    getch();
}