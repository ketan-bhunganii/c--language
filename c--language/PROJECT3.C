#include<stdio.h>
#include<conio.h>
#define TOTAL 180
main()
{
    int a;
    int b ;
    int c;
    int sum;
    clrscr();
    printf("First Angle is:");
    scanf("%d",&a);
    printf("second Angle is:");
    scanf("%d",&b);
    sum = a+b;
    printf("Third Angle is: %d",TOTAL-sum);
    getch();
    }
