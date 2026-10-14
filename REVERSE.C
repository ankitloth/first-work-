#include<stdio.h>
int main ()
{
long long n,reverse=0,remainder;
printf("Enter the number:");
scanf("%lld",n);
while(n!=0){
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
printf("Reversed number=%lld\n",reverse);
return 0;
}