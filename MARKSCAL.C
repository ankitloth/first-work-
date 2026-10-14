#include<stdio.h>
int main()
{
int eng=95,lang=98,eco=98,bus=95,acc=95,cs=90;
int total;
float perc;
scanf("%d %d %d %d %d %d",&eng,&lang,&eco,&bus,&acc,&cs);
printf("%d %d %d %d %d %d",eng,lang,eco,bus,acc,cs);
total=eng+lang+eco+bus+acc+cs;
printf("The total marks is:%d\n",total);
perc=(total/600.0)*100;
printf("The percentage is:%f\n",perc);
return 0;
}