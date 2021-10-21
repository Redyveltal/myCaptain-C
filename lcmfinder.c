#include<stdio.h>

int lcm(int, int);

int main()
{
	int a, b, i;
	printf("Enter the first number : ");
	scanf("%d", &a);
	printf("Enter the second number : ");
	scanf("%d", &b);
	i = lcm(a, b);
	printf("The LCM of the numbers is : %d", i);
	return 0;
}

int lcm(int a, int b)
{
	static int c = 1;
	if(c%a == 0 && c%b == 0)
	{
		return c;
	}
	else
	{
		c++;
		lcm(a, b);
		return c;
	}
}
