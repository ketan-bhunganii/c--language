#include<stdio.h>
#include<conio.h>
main()
{  int a;
   float hr;
   float da;
   float ta;
   clrscr();
   printf("base salary:");
   scanf("%d",&a);
   hr=a*0.1;
   da=a*0.05;
   ta=a*0.08;
   printf("RS:%.2f",a+hr+da+ta);
   getch();
}




