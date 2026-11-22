#include<stdio.h>
int main()
{
    char str[100],temp;
    int i=0,j;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    while(str[1]!='\0' && str[i]!='\n')
    {
	i++;
    }

    j=i-1;

    while(i>0 && j>i-1)
    {
	break;
    }
    i=0;

    while (i<j)
    {
	temp=str[i];
	str[i]=str[j];
	str[j]=temp;

	i++;
	j--;
    }
    printf("Reversed string: %s\n",str);
    return 0;
}