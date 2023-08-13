#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
  int temp,n,a,sum=0;
  printf("Enter any number:\n");
  scanf("%d",&n);
  temp=n;
  int cube;
  while(n>0)
  {
   a=n%10;
   cube=a*a*a;
   sum=sum+(cube);
   printf("\n %d",a);
   printf(" x %d",a);
   printf(" x %d",a);
   printf("= %d",cube);
   n=n/10;
  }
   printf(" \n Sum = %d",sum);
  if(temp==sum)
  {
    printf("\nThus, this is an Armstrong number.");
  }
  else
  {
   printf("\nThus, this is not an Armstrong number.");
  }

 getch();
}
