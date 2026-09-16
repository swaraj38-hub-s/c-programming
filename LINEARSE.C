#include<stdio.h>
#include<conio.h>
void main()
{
  char a[5],c,i,found=0;
  clrscr();
  for(i=0;i<5;i++)
  {
    printf("enter any character");
    scanf(" %c",&a[i]);
  }
  printf("enter search character");
  scanf(" %c",&c);

  for(i=0;i<5;i++)
  {
     if(a[i]==c)
     {
       found=1;
       break;
     }
  }
  if(found==1)
  {
    printf("character is found");
  }
  else
  {
    printf("not found");
  }
  getch();
}