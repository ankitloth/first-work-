#include<stdio.h>
int main ()
{
int grade=92;
char name;
printf("Name of the student:");
scanf("%c",&name);
printf("Enter the grade of the student:");
scanf("%d",&grade);{
if(grade>=90)
printf("A+ grade");
else if(grade>=80 && grade<90)
printf("A grade");
else if(grade>=70 && grade<80)
printf("B grade");
else if(grade>=60 && grade<70)
printf("C grade");
else if(grade>=50 && grade<60)
printf("D grade");
else
printf("Fail");}
return 0;
}