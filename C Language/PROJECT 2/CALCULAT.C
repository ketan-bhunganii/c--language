#include<stdio.h>
#include<conio.h>
main()
{
	int marks;
	char grade;
	clrscr();
	printf("enter the marks:");
	scanf("%d",&marks);

	if(marks>90){
		  grade ='A';
		  printf("your grade is A");
       }
	else if (marks>80){
		grade='B' ;
		printf("your grade is B");

	}

	 else if (marks>70){
		grade='C';
		printf("your grade is C");
	}
	  else if (marks){
		 grade='F';
		 printf("your grade is F");
	}
	    switch (grade)
	  {
		case 'A': printf("\nexcellent work:");
		break;
		case 'B': printf("\nwell done");
		break;
		case 'C': printf("\nyou passed,butcould do better.");
		break;
		case 'F': printf("\nsorry you failed.");
		break;
		default : printf ("\ninvalid data.");
	 }
	    if (grade == 'A'|| grade == 'B'|| grade == 'c'){
		printf("\ncongratulation you on a new level");
		}
		else{
		printf("\nplease try again next time");
		}
		getch();
}