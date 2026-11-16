#include<stdio.h>
int main ()
{
   int a[10][10],b[10][10],c[10];
   int r1,c1,r2,c2,i,j,k;
   printf("Enter rows and coloumns of first matrix:");
   scanf("%d %d",&r1,&c1);

   printf("Enter rows and columns of second matrix:");
   scanf("%d %d",&r2,&c2);

   if(c1!=r2)
   {
       printf("Matrix multiplication is not possible.");
       return 0;
   }

   printf("Enter elements of first mayrix:\n");
   f