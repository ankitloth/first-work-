#include<stdio.h>
int main(){
 int length,width,area,perimeter;
printf("Enter length:");
scanf("%d",&length);
printf("Enetr width:");
scanf("%d",&width);
area=length*width;
perimeter=2*(length+width);
printf("\nThe area of rectangle is:%d",area);
printf("\nThe perimeter of rectangle is:%d",perimeter);
return 0;
}