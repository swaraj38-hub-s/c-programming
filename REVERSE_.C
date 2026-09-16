#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i;
  clrscr();

  for(i=0;i<5;i++)
  {
    printf("enter array element");
    scanf("%d",&a[i]);
  }
  printf("array in reverse order") ;
  for(i=4;i>=0;i--)
  {
    printf("%d",a[i]);
  }
  getch();
}
