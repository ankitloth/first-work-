#include<stdio.h>
long power(long base,int exp){
long result=1;
int i;
for(i = 0; i < exp; i++) {
result= result * base;
}
return result;
}

int main(){
long num,original,temp,sum=0;
int digits=0;

printf("Enter an integer: ");
scanf("%d",&num);

original=num;
temp=num;

if(num < 0){
printf("Please enter a non-negative number.\n");
return 0;
}
if (temp == 0) {
digits = 1;
}
else {
while (temp != 0) {
digits++;
temp = temp / 10; }
}

temp = original;
if(temp == 0) {
sum = 0; }
else{
while (temp != 0) {
sum = sum + power(temp % 10, digits);
temp = temp / 10;}
}

if(sum == original)
printf("%ld is an Armstrong number.\n",original);
else
printf("%ld is not an Armstrong number,\n",original);

getchar();
getchar();
return 0;
}