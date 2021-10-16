#include<stdio.h>
main()
{
	printf("Enter your first number :");
	int a=0;
	scanf("%d", &a);
	printf("Enter your second number :");
	int b=0;
	scanf("%d", &b);
	printf("Numbers before swapping are : %d, %d \n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Numbers after swapping are : %d, %d", a, b);
}
