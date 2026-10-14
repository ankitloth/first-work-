#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the third number:");
scanf("%d",&c);
if (a>0)
printf("Positive");
else if(a<0)
printf("Negative");
else
printf("Zero");

if(b>0)
printf("Positive");
else if(b<0)
printf("Negative");
else
printf("Zero");

if(c>0)
printf("Positive");
else if(c<0)
printf("Negative");
else
printf("Zero");
return 0;
}