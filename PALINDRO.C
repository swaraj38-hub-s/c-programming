#include<stdio.h>
#include<conio.h>
void main()
{

  int n,s=0,r,org;
  clrscr();
  printf("enter any number:");
  scanf("%d",&n);
  org=n;
  while(n>0)
  {
     r=n%10;
     s=s*10+r;
     n=n/10;
  }
  if(org==s)
  {
     printf("number is pallindrome");
  }
  else
  {
     printf("not pallindrome");
  }
  getch();
}