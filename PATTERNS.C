#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,j;
printf("Enter number of rows:");
scanf("%d",&n);
printf("\nRight triangle:\n");
for(i=1;i<=n;i++){
for(j=1;j<=i;j++) printf("* ");
printf("\n");
}
return 0;
}