#include<stdio.h>
int main ()
{
	int a, b, i, gcd;
	printf("Enter two number: ");
	scanf("%d %d ", &a, &b);
	i = 1;
	gcd = 1;
	while (i<= a && i <= b)
	{
		if (a % i == 0 && b % i ==0)
		{
			gcd = i;
		}
		i++;
	}
	printf("GCD of %d and %d is %d\n", a, b, gcd);
	return 0;
}