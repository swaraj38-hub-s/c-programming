#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i,sum=0;
  float avg;
  clrscr();
  for(i=0;i<5;i++)
  {
    printf("enter element:");
    scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++)
  {
    sum=sum+a[i];
  }
  avg=sum/5;
  printf("avg=%f",avg);
  getch();
}