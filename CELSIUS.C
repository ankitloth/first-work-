#include<stdio.h>
#include<conio.h>
int main()
{
float celsius,fahrenheit;
printf("Enter celsius:");
scanf("%f",&celsius);
printf("Enter fahrenheit:");
scanf("%f",&fahrenheit);
printf("\nThe fahrenheit is:%f",(celsius*9/5)+32);
printf("\nThe celsius is:%f",(fahrenheit-32)*5/9);
return 0;
}