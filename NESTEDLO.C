#include<stdio.h>
int main()
{
int a,d,c;
int largest,secondLargest;
printf("Enter the number:");
scanf("%d %d %d",&a, &d, &c);
if (a>d && a>c){
largest=a;
secondLargest = (d>c)? d:c ;
}
else if (d>c && d>a){
largest=d;
secondLargest = (a>c)? a:c ;
}
else {
largest=c;
secondLargest = (d>c)? a:d ;
}
return 0;
}